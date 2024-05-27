#Experiment no. 1 By - Vrushabh Sanjay Bastwade (20UET009)
#Experiment to understand the build in functions
# input(),type(),id(),len(),print(),Typecasting
a = input("Enter the data:")
b = input("Enter the data:")
c = input("Enter the data:")
# Print the data
print(a)
print(b)
print(c)
print("Before typecasting:")
# print the type
print(type(a))
print(type(b))
print(type(c))
# Typecastng
b = int(b)
c = float(c)
#Print the data after typecasting
print("After typecasting:")
print("The type of a",type(a))
print("The type of b",type(b))
print("The type of c",type(c))
# print the length
print("The length of string:",len(a))

print("The id of a:",id(a))
print("The id of b:",id(b))
print("The id of c:",id(c))
print("\n")
print("After eval")
a=eval(input("enter the data: "))
b=eval(input("enter the data:"))
c=eval(input("enter the data: "))
print("The type of a",type(a))
print("The type of b",type(b))
print("The type of c",type(c))







