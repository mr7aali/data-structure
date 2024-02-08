userInput = input()
[initalBanaCost,initalBanalance,wantedQuentity] = userInput.split()

i = int(wantedQuentity)
totalCost = 0
while 0 < i:
    totalCost += i*int(initalBanaCost)
    i -= 1

if totalCost > int(initalBanalance):
    print(totalCost - int(initalBanalance))
else:
    print(0)