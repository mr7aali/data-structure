# A. Beautiful Matrix


Matrix = []

for i in range(5):
    row = []
    row.append(input())
    Matrix.append(row)


newMatrix = []
for row in Matrix:
    row = row[0].split()
    newRow = [int(num) for num in row]
    newMatrix.append(newRow)


# print(newMatrix[2][2])

one_indices = []

for i in range (len(newMatrix)):
    for j in range(len(newMatrix[i])):
        if(newMatrix[i][j]) == 1:
            print(abs(2-i) + abs(2-j))