x = int(input("enter the number:"))
flag=0
if x>1:
    for i in range(2,x):
        if x % i == 0:
            flag=1
            break
if flag:
    print("prime")
else:
    print("non prime")
