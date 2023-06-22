def addtwo(a,b):
    if(a == 1):
        return b
    b = addtwo(a - 1, b - 1)
    return 0
a = 10
b = 15
addtwo(a,b)
print(a)


