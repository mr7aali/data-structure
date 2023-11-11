# A. Bit++

n = int(input())
x = 0




def TestFuncion(x):
    Operation = input()
    i = 0
    while len(Operation) > i:
        if Operation[i] == "X":
            if Operation[i + 1] == "+" and Operation[i + 2] == "+":
                x += 1
                i += 3
            elif Operation[i + 1] == "-" and Operation[i + 2] == "-":
                x -= 1
                i += 3
        elif Operation[i] == "-":
            if Operation[i + 1] == "-" and Operation[i + 2] == "X":
                x -= 1
                i += 3
        elif Operation[i] == "+":
            if Operation[i + 1] == "+" and Operation[i + 2] == "X":
                x += 1
                i += 3
        else:
            i += 3
    return  x



for i in range(n):
    x = TestFuncion(x)


print(x)