print("jai shir ram")
l = [2,3,4,5,2,5,64,23,5653,4,543,234,6]
seq = list(map(lambda x:x*x*5,l))
print(seq)
l = (2,3,4,5,2,5,64,23,5653,4,543,234,6)
seq = tuple(map(lambda x:x*x,l))
print(seq)
l = {2,3,4,5,2,5,64,23,5653,4,543,234,6}
seq = set(map(lambda x:x*x,l))
print(seq)
l = {3:4,5:2,5:64,23:5653,4:543,234:6}
seq = list(map(lambda x:x*x,l))
print(seq)
