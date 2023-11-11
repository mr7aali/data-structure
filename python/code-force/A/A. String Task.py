# A. String Task
# time limit per test2 seconds
# memory limit per test256 megabytes
# inputstandard input
#  outputstandard output


str1 = input().lower()
result =""

for s in str1:
    if s not in "aeiouy":
        result += "." + s

print(result)


