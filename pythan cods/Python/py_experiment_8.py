"""
x = {9:"vrushabh",20:"pratik",33:"suraj",45:"omkar",11:"adinath",}
x.update({8:"jitin"})
print(x)
"""
"""
# append the dictionary
dict1 = {1:10,2:20}
dict2 = {3:30,4:40}
dict3 = {5:50,6:60}
dict4 = {}
print("The elements in dict1:")
print(dict1)
for i in dict1 :
    print(f"the values are {i}:{dict1[i]}")

print("The elements in dict2:")
for i in dict2 :
    print(f"the values are {i}:{dict2[i]}")

print("The elements in dict3:")
for i in dict3 :
    print(f"the values are {i}:{dict3[i]}")
for i in (dict1,dict2,dict3) :
    dict4.update(i)
print(dict4)
"""
"""
# to find the given key already in the list or not
x = {9:"vrushabh",20:"pratik",33:"suraj",45:"omkar",11:"adinath","dhoni":7}
i = eval(input("Enter the key value pair:"))
print("key is present in the dic")if i in x else print("key is not in dic")

"""
# no. of occurance in the string
x = "www.google.com"
print(x)
result = dict()
for i in x :
    j = result.keys()
    if i in j :
        result[i] += 1
    else :
        result[i] = 1
print(result)
