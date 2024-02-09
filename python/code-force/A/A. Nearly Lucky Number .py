number = int(input())
is4 = False
is7 = False
count = 0
while number > 0:
        mod = number % 10
        if mod == 4:
            count += 1
        elif mod == 7:
            count += 1
        number //= 10


if count == 4 or count == 7:
    print("YES")
else:
    print("NO")