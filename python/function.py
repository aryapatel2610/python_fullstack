#function with no argument & no return;

def printLine():
    print("*",*50)

printLine()


#function with argument but no return value.

def add(a,b):
    print("Addition:",a+b)

printLine()
x=int(input("Enter value:"))
y=int(input("Enter value:"))

add(x,y)
printLine()

#function with argument and with return.

def sub(a,b):
    return a-b
printLine()
x=int(input("Enter value:"))
y=int(input("Enter value:"))

print("sub is: ",  sub(x-y))
printLine()

