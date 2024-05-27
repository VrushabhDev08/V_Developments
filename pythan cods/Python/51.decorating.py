"""
def func1():
    print("JAI SHRI RAM")
func2 = func1
del func1
func2()
print("====================================================")

def f1(num):
    if num ==0:
        return print
    else :
        return sum
print(f1(2))
"""
print("====================================================")
def function1(fu1):
    def de():
        print("decoration part 1")
        fu1()
        print("decoration part 2")
        return de

@function1
def vb ():
    print("JAI SHRI RAM")
