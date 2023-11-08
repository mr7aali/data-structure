# A. Petya and Strings

str1 = input().upper()
str2 = input().upper()

result = 0

for i in range(len(str1)):
    if str1[i]==str2[i]:
        result = 0
    elif str1[i] < str2[i]:
        result = -1
        break
    else:
     result = 1
     break

print(result)
