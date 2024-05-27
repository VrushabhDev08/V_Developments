"""
here we usw try and expect
"""

n1 = input("enter the no.")
n2 = input("enter the no.")
def vb(n1,n2):
    try:
        print("the sum is", int(n1) + int(n2))

    except Exception as e:
        print("enter the correct no.")

    print("this is not so easy ")
print(vb(n1,n2))
