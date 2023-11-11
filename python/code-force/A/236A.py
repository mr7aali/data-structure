# A. Boy or Girl


username = input()
distinctUsername = ""
for char in username:
    if char not in distinctUsername:
        distinctUsername += char

if len(distinctUsername) % 2 == 0:
    print("CHAT WITH HER!")
else:
    print("IGNORE HIM!")
