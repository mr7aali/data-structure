# A. Translation

str1 = input()
str2 = input()
str2 = "".join(reversed(str2))

if str1 == str2:
    print("YES")
else: print("NO")