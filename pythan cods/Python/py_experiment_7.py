"""
# sum of string
x = [3,2,54,76,12,34,54]
print("The sum all members in the list is :",sum(x))

---------------------------------------------------------------

x = [3,4,2,643,23,1,5,4353,67]
x.sort()
print(x[0])
#print(x(1))

------------------------------------------------------------------------

#second largst no. in list
x = [3,4,2,643,23,1,5,4353,67]
x.sort()
print("The second last no. is",x[-2])

-------------------------------------------------------------
"""
fruits = ["apple","banana","cherry","kiwi","mango"]
newlst = list()
for x in fruits :
    if "a" in x :
        newlst.append(x)
print(newlst)
