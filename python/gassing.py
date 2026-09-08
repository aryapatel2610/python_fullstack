import random

num=random.randint(1,20)

while True:
    guess=int(input("guess A number 1 to 20"))
    if guess==num:
        print("you guess A correct number")
        break
    elif guess>num:
        print("you guess A greater number")
    elif guess<num:
        print("you guess A smaller number")
        
