#mini calculator
fir=input("enter the first number:")
sec=input("enter the second number:")
fir=int(fir)
sec=int(sec)
operater=input("enter the operater:")
if operater=='+':
    print(fir + sec)

elif operater=='-':
    print(fir - sec)

elif operater=='*':
    print(fir * sec)

elif operater=='/':
    print(fir / sec)

elif operater=='%':
    print(fir % sec)