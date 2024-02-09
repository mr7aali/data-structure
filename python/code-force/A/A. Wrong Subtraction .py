number , times = map(int , input().split())

for t in range(times):
    if number % 10 == 0:
        number /= 10
    else:
        number -= 1
print(int(number))