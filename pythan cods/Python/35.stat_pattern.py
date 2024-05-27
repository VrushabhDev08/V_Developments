print("JAY SHRI RAM ")
print(" jai pratik sir")
num = int(input("enter the row: "))
bool = input("enter 1 or o:")
if bool =="1":
    for i in range (0,num +1) :
        print("*"* i)
if bool == "0":
    for i in range (num,0,-1) :
        print("*"  * i)
