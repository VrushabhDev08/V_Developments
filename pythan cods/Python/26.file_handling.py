"""
file handling in python
"r"- read content from file - default is already set
"w" - write content in file
"x"- create new file
"b"- binary mode
"t"- text mode - default is already set
"+" - both read and write

"""
f = open("26_india.txt")
vb = f.read()
print(vb)