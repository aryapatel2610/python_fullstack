#this is our decorater function
def my_decorator(func):
    #this is the wrapper function that adds behavior
    def wrapper():
        print("before calling the function")
        func() #call the original function
        print("After calling the function")
    return wrapper   #return the wrapper function
#this is the function we want to decorate

def say_hello():
    print("hello,world")

say_hello()

    
