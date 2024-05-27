"""
x = input("Enter the string:")
print(x[::-1])

x = "dkte textile and engineering institute"
print(x)
i = input("Enter the substring:")
print(f"{i} present in the string")if i in x else print(f"{i} not present in the string")


x = "dkte textile and engineering institute"
print(x)
y = " a e i o u"
count = 0
for i in x:
    if i in y :
        count += 1

print(count)

x = "abc"
y = "xyz"
print("The expected string are:",x[0]+y[1:],y[0]+x[1:])
"""
x = input("Enter the string:")
if len(x)>=3 :
    if x[:-4:-1] == "gni":
        print(x+"ly")
    else :
        print(x+"ing")


