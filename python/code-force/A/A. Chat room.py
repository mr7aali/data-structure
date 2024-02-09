# Input
s = input()

# Check if Vasya managed to say hello
index = 0
hello_pattern = "hello"

for char in s:
    if char == hello_pattern[index]:
        index += 1
        if index == len(hello_pattern):
            break

# Output the result
if index == len(hello_pattern):
    print("YES")
else:
    print("NO")
