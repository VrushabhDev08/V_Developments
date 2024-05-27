"""
print("Vrushabh's code")
a = 9 # it is now a global keyword
def f1():
   # a = 6
   # global a
    a = a + 100
    b = 76

    print(a,b)

f1()
"""
x = 453
print("Vrushabh's another code")
def f1():
    x = 15
    def f2 ():
        global x
        x = 35
    print("before global",x)
    f2()
    print("after global",x)

f1()
print(x)