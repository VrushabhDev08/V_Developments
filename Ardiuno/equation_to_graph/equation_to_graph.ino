void setup() {
  Serial.begin(9600);
}

void loop() {
  if (Serial.available() > 0) {
    String equation = Serial.readStringUntil('\n'); // Read equation from serial monitor

    for (float x = -10.0; x <= 10.0; x += 0.1) {
      float y = evaluateEquation(equation, x);
      int yPos = map(y, -100, 100, 0, 20); // Map y values to fit within 20 rows on the serial monitor
      Serial.print((int)x);
      Serial.print("\t");
      for (int i = -10; i <= yPos; i++) {
        if (i == 0) {
          Serial.print('*'); // Print '*' at y=0
        } else if (i == yPos) {
          Serial.print('|'); // Print '|' at the top of the graph
        } else {
          Serial.print(' '); // Print space for other positions
        }
      }
      Serial.println();
      delay(50); // Adjust delay as needed
    }
  }
}

float evaluateEquation(String equation, float x) {
  equation.trim(); // Remove leading and trailing whitespaces
  equation.replace(" ", ""); // Remove spaces
  equation.replace("x", String(x)); // Replace 'x' with the value of x
  return evaluateExpression(equation);
}

float evaluateExpression(String expression) {
  char exp[50];
  expression.toCharArray(exp, 50);
  return evaluate(exp);
}

float evaluate(char* exp) {
  int i = 0;
  return evaluateExpressionUtil(exp, &i);
}

float evaluateExpressionUtil(char* exp, int* i) {
  if (exp[*i] == '\0' || exp[*i] == ')') {
    (*i)++;
    return 0;
  }

  float res = parseTerm(exp, i);

  while (exp[*i] == '+' || exp[*i] == '-') {
    char op = exp[(*i)++];
    float temp = parseTerm(exp, i);
    if (op == '+') {
      res += temp;
    } else {
      res -= temp;
    }
  }

  return res;
}

float parseTerm(char* exp, int* i) {
  float res = parseFactor(exp, i);

  while (exp[*i] == '*' || exp[*i] == '/') {
    char op = exp[(*i)++];
    float temp = parseFactor(exp, i);
    if (op == '*') {
      res *= temp;
    } else {
      res /= temp;
    }
  }

  return res;
}

float parseFactor(char* exp, int* i) {
  float res;
  if (exp[*i] == '(') {
    (*i)++;
    res = evaluateExpressionUtil(exp, i);
    (*i)++; // Skip ')'
  } else {
    int j = *i;
    while (exp[j] >= '0' && exp[j] <= '9') {
      j++;
    }
    char num[20];
    strncpy(num, exp + *i, j - *i);
    num[j - *i] = '\0';
    *i = j;
    res = atof(num);
  }
  return res;
}
