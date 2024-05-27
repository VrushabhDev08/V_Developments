#include <iostream>
using namespace std;
class complex
{
  int a, b;
 

public:
  void setcomplex(int v1, int v2)
  {
    a = v1;
    b = v2;
  }
   friend complex  setsumcomplex(complex o1, complex o2);
  void printnumbers(void)
  {
    cout << "Your complex no. is:" << a << "+" << b << "i" << endl;
  }
};
void setsumcomplex(complex o1, complex o2) // objects as an arguments is passed
{
  complex o3;
  o3.setcomplex((o1.a+o2.a), (o1.b+o1.b));
  return o3;
}
int main()
{
  complex c1, c2, sum;
  c1.setcomplex(1, 3); // here the complex no. additon is taken place in which we passing
  c1.printnumbers();   // the objects as an arguments
  c2.setcomplex(4, 6);
  c2.printnumbers();
  sum = setsumcomplex(c1, c2);
  sum.printnumbers();
}