
n, t = map(int, input().split())
studentQueue = list(input())
for t in range(t):
    i = 0
    while i < n-1:
        if studentQueue[i] == "B" and studentQueue[i+1] == "G":
            studentQueue[i], studentQueue[i + 1] = studentQueue[i + 1], studentQueue[i]
            i += 2
        else: i += 1

result = ''.join(studentQueue)
print(result)
