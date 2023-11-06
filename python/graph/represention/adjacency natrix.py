adjacencyMatrix = []
vertices = int(input("Number of vertices : "))
edges = int(input("Number of edges : "))

for i in range(vertices):
    row = []
    for j in range(vertices):
        row.append(0)
    adjacencyMatrix.append(row)

print("Initial Graph : ")
for i in range(vertices):
    row = ""
    for j in range(vertices):
       row += " " + str(adjacencyMatrix[i][j])
    print(row)


for i in range(edges):
    v1 = int(input("V1 : "))
    v2 = int(input("V2 : "))
    adjacencyMatrix[v1][v2] = 1

print("Final Graph : ")
for i in range(vertices):
    row =""
    for j in range(vertices):
       row += " " + str(adjacencyMatrix[i][j])
    print(row)
