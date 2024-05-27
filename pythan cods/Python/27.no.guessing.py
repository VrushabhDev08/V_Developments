n=18
B=9
number_of_guess =1
print("Number of guesses is only 9 times ")
while (number_of_guess <=9) :
    guess = int(input("Guess the no.:\n"))
    if guess <n :
        print("Enter the no. is low please enter the greater no.\n")
    elif guess>n :
        print("Enter the no. is higher please enter the lower no.\n")
    else :
        print("YOU WON\n")
        print(number_of_guess,"No. guess took to finish\n")
        break
    print(B- number_of_guess,"You left no. guesses")
    number_of_guess +=1

if (number_of_guess >=9):
    print("GAME OVER")