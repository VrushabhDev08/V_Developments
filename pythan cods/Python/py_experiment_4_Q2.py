n = int(input("Enter the no."))
sum = 0
count = 0
org = n
while n !=0 :
    n = n/10
    count +=1
a = org
n = org
while a!= 0 :
    n = n%10
    a = a//10
    j = n**count
    sum +=j
if sum == org :
    print("No. is armstrong")
else :
    print("No. is not aemstorng")