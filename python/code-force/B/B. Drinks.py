numberOrangeContaining = int(input())

volumeFraction = [ int(x) for x in input().split()]
result = sum(volumeFraction) / numberOrangeContaining
print("{:.12f}".format(result))