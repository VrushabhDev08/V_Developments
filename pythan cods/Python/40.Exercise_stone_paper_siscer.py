import random
lst = ["st","p","s"]
chance = 10
no_chance = 0
comp_point = 0
user_point = 0
print("enter the anyone:")
print("st for stone\n p for paper \n s for siscer\n")
while no_chance<  chance :
    ip = input("enter the choice:")
    rd = random.choice(lst)
    if ip == rd:
        print("tie both sides o points each\n")
    elif ip =="st" and rd =="p":
        comp_point = comp_point + 1
        print(f"your choice {ip} and computer choice {rd}\n")
        print(f"computer wins:{comp_point}")
    elif ip =="st" and rd =="s":
        user_point = user_point + 1
        print(f"your choice {ip} and computer choice {rd}\n")
        print(f"user wins:{user_point}")
    elif ip =="p" and rd =="st":
        user_point = user_point + 1
        print(f"your choice {ip} and computer choice {rd}\n")
        print(f"user wins:{user_point}")
    elif ip =="p" and rd =="s":
        comp_point = comp_point + 1
        print(f"your choice {ip} and computer choice {rd}\n")
        print(f"computer wins:{comp_point}")
    elif ip =="s" and rd =="st":
        comp_point = comp_point + 1
        print(f"your choice {ip} and computer choice {rd}\n")
        print(f"computer wins:{comp_point}")
    elif ip =="s" and rd =="p":
        user_point = user_point + 1
        print(f"your choice {ip} and computer choice {rd}\n")
        print(f"user wins:{user_point}")
    else :
        print("enter the correct input\n")
    no_chance = no_chance + 1
    print(f"no of chance left:{chance - no_chance}")


print("GAME OVER\n")
if user_point > comp_point:
    print(f"user wins:{comp_point}\n")
elif comp_point > user_point:
    print(f"comp wins:{user_point}\n")

