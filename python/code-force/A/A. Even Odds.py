n, k = map(int, input().split())

if k <= (n + 1) // 2:
    # Odd position
    result = 2 * k - 1
else:
    # Even position
    result = 2 * (k - (n + 1) // 2)

print(result)
