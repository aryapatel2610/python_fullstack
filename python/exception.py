print("start code")
try:
    a=int(input("Enter A :"))
    b=int(input("Enter B :"))
    c=a/b
    print("division:",c)
except ZeroDivisionError as e:
    print("Exception caught")
except ValueError as e:
    print("Exception caught")
finally:
    print("finally block called")
print("End code") 
    
