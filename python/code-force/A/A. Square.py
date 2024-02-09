t = int(input("Enter the number of test cases: "))

for _ in range(t):
    # Input coordinates of the corners
    x1, y1 = map(int, input().split())
    x2, y2 = map(int, input().split())
    x3, y3 = map(int, input().split())
    x4, y4 = map(int, input().split())

    # Calculate the side length (assuming sides are parallel to coordinate axes)
    side_length = max(abs(x1 - x2), abs(y1 - y3))

    # Calculate and print the area of the square
    area = side_length ** 2
    print(area)