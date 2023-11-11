# A. Word
# time limit per test2 seconds
# memory limit per test256 megabytes
# inputstandard input
# outputstandard output

word = input()

countLowerCaseChar = 0
countUpperCaseChar = 0
for c in word:
    if c.islower():
        countLowerCaseChar += 1
    elif c.isupper():
        countUpperCaseChar += 1


if countLowerCaseChar > countUpperCaseChar or countUpperCaseChar == countLowerCaseChar:
    print(word.lower())
else:
    print(word.upper())

