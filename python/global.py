#with out global keyword

"""
def mufun():
        print(name)
        name="python language"
        print(name)

name="python"
myfun()
print(name)
"""
#with global keyword

def myfun():
    global name
    print("1st",name)
    name="python language"
    print("2nd",name)

name="python"
myfun()
print("3rd",name)
