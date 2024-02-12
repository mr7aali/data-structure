gamesPlayed = input()
game = input()
countA = 0
countD = 0

for char in game:
    if char == 'A':
        countA += 1
    elif char == "D":
        countD += 1

if countA > countD:
    print("Anton")
elif countA < countD:
    print("Danik")
elif countA == countD:
    print("Friendship")

