# A. Football

nonEmptyString = input()

count = 0
for i in range(len(nonEmptyString)):
    tempChar = nonEmptyString[i]
    j = 0
    while j+i < len(nonEmptyString) and tempChar == nonEmptyString[j+i]:
        count += 1
        j += 1
    if count < 7:
        count = 0
    else:
        break


if count < 7:
    print("NO")
else: print("YES")
