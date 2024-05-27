print("jai shri ram ")
x = ["vrushabh","sonali","pratik","suraj","aditi"]
print(type(x))
print(len(x))
print(x.count("vrushabh"))
x.append("omkar") # when you want to add only one value u can use this
print(x)
y = {"a":"b","c":"d"}#you can add also tuple and
# when you adding dictionary only key values are added
x.extend(y) # when you want to add entire list in this u can use this
print(x)
print(x.index("c")) #return the value of this index
print(x.pop()) # reoves value at index -1
x.remove("sonali")
print(x)
x.reverse()
print(x)
x.sort()
t = x.copy()
print(t)
#x.clear()
print(x)