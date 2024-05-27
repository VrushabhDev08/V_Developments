"""
a = open("etc.txt","r")
print(a.read())
a.close()

a = open("etc.txt","r")
print(a.readline())
print(a.readline())
print(a.readline())
print(a.readline())
print(a.readline())
a.close()

a = open("etc.txt","r")
lines = len(a.readlines())
print("the total no. of lines:",lines)
a.close()
"""
a = open("etc.txt","w")
a.write(" DKTE-TEI-Ich-ETC-Dept.")
a.close()
 
