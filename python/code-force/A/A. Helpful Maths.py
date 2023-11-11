# A. Helpful Maths


messyOrderNumbers = [int(num) for num in input().split("+")]

messyOrderNumbers = sorted(messyOrderNumbers)
result = ""
for num in messyOrderNumbers:
     result += str(num) + "+"


print(result[:-1])

