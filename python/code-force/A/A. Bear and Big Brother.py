
LimakWeight, BobWeight = map(int, input().split())

i = 1
while LimakWeight <= BobWeight:
    LimakWeight *= 3
    BobWeight *= 2
    i += 1

print(i-1)