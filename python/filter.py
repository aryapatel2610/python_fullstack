l1= ["patel","arya","om","ved"]

def findVowels(name):
    if name[0] in "aeiou":
        return name

l2=list(filter(findVowels,l1))
print(l2)
