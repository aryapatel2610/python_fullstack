inport oddeven(n):
    if n%2==0:
        print(n," Is even")
    else:
        print(n, " is odd")
def maxoftwo(a,b):
    if a>b:
        print(a," is max")
    else:
        print(b," is max")
def maxofthree(a,b,c):
    if a>b:
        if a>c:
            print(a,"a is max")
        else:
            print(c,"c is max")
    elif b>c:
        print(b,"is max")
    else:
        print(c, "c is max")

def prime(n):
    if n%2!=0:
        for i in range(3,int(n/2)+1,2):
            if n%i==0:
                print(n,"is prime number")
                break:
        else:
            print(n," is prime")
    else:
        print(n," is not prime")

#0 1 2 3 5 8 13 21 34

def fibonacci(n):
    a,b=0,1
    print(a,end=" ")
    while b<n:
        print(b,end=" ")
        a,b=b,a+b
    print()
    
