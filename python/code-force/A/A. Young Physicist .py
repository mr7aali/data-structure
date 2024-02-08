numberOfLine = int(input())

total = 0
array2D = []
x = 0
y = 0
z = 0
for i in range(numberOfLine):
    numbers = [int(x) for x in input().split()]
    array2D.append(numbers)


for [i,j,k] in array2D:
   x += i
   y += j
   z += k

if x == 0 and y == 0 and z == 0:
    print("YES")
else:
    print("NO")