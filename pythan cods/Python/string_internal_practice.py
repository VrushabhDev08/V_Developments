# x = [1,2,4,6,3,34,64432]
# y = {12:55,54:78}
# #print(min(x[:]))
# #print(x.())
# x.pop()
# print(id(x))
# #print(id(y))
# print(x)
# #TUPLE
# x = ("vruhabh","bastwade","sanjay")
# y = (23,453,56,23,565,5)
# print(x+y)
# print(y[2:].index(23))
# x = "$".join(x[1:])
# print(x)
# #set 
# a =()
# x = {1,2,3,4,5,6,7,8}
# y = [12,23,12,3434,232]
# y.extend(a)
# #x.update(y)
# x.discard(-144)
# print(type(a))
# #UNPACKING & PACKING OF tuple
# x = ("vb",2,3,4,4,5,6,7,87,99,100,456,321,789)
# a1,*a2,a3 = x
# print(a1,tuple(a2),a3)
#Dictionary 
# x = {1:"vrushabh",2:"sonali",3:"suraj",4:"omkar",5:"pratik"}
# x.update({6:"vrushabh",7:"hello",8:"vbbbb"})
# print(x.values())
# x = 4
# z = 4
# y = [1,2,3,4,5]
# print(x is z)
#palindrome no.
# import math 
# x  = int(input("Enter the no."))
# temp = x
# rem = 0
# order = len(str(x))
# while x>0:
#     dig = x%10
#     rem += dig**order 
#     x = x//10
# if temp == rem:
#     print("palidorme no.")
# else:
# #     print("non palindrome no.")
# x  = int(input("Enter the no."))
# flag =0
# for i in range(2,x):
#     if x%i==0:
#         flag =1
# print("prime")if flag ==0 else print("non prime")
# x=6
# for i in range(9,0,-1):
#     print("*"*i)
# x=4
# y=6
# print(not(x))
# def info(**nm):
#     print(nm)
#     #print(sr)
# info(cl="A",nm="Vrushabh")
x = "vrushabh 08"
l=0
d=0
for i in x:
    if i.isalpha()==True:
        l+=1
    elif i.isdigit()==True:
        d+=1
print(f"{d}   {l}")
print("vrushabh bastwade")
