print("Pattern 1")
x = int(input("Enter Row: "))
for x in range(1, x + 1):
    print(x * "*", end=" ")
    print()

print("\nPattern 2")
x = int(input("Enter Row: "))
for i in range(1, x + 1):
    print(" " * (x - i) + "*" * i, end="")
    print()

print("\nPattern 3")
x = int(input("Enter Row:"))
for i in range(x, 0, - 1):
    print("*" * i, end="")
    print()

print("\nPattern 4")
x = int(input("Enter Row: "))
for i in range(1, x + 1):
    for m in range(1, i + 1):
        print(i, end=" ")
    print()

print("\nPattern 5")
x = int(input("Enter Row: "))
for i in range(1, x + 1):
    for m in range(1, i + 1):
        print(m, end=" ")
print("\nPattern 6")
x = int(input("Enter Row: "))
b = x
for i in range(1, x + 1):
    print(" " * b, end="")
    for j in range(1, i + 1):
        print("* ", end="")
    b -= 1
    print()

print("\nPattern 7")
x = int(input("Enter Row: "))
b = x
x *= 2
for i in range(1, x + 1, 2):
    print(" " * b, end="")
    for j in range(1, i + 1):
        print("*", end="")
    b -= 1
    print()




