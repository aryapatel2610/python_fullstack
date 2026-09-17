l1={1,2,3,4,5}

def square(n):
    return n*n
l2 = list(map(square,l1))
print(l2)

#using lambda to add corresponding element:

words = ["hello", "world","pytohn"]

#convert each word to uppercase using map:

uppercase_words = map)lambda word: word.upper(),words)

print(list(uppercase_words))

