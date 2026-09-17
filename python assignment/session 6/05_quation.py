# Pyramid Pattern

row = 1

while row <= 4:
    
    space = 4 - row
    while space > 0:
        print(" ", end="")
        space -= 1

    star = 1
    while star <= (2 * row - 1):
        print("*", end="")
        star += 1

    print()
    row += 1
