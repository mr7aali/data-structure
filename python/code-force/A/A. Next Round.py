# Next Round

n, k = map(int, input().split())

scores = list(map(int, input().split()))
count = 0
for score in scores:
    if score > 0 and score >= scores[k-1]:
        count +=1

print(count)