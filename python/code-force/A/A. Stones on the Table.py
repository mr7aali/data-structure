num = input()
stones = input()
differentColorStones = ""

for i in range(len(stones)-1):
     if(stones[i] != stones[i+1]):
         differentColorStones += stones[i]
differentColorStones += stones[len(stones)-1]
result = len(stones) - len(differentColorStones)
print(result)

