def binarySearch(mylist,key):
    left = 0
    right = len(mylist) - 1

    while left <= right:
        mid = (left + right) // 2
        if mylist[mid] == key:
           return True
        if key > mylist[mid]:
            left = mid + 1
        else:
            right = mid - 1


list =[0 , 1, 2, 3, 4, 5, 6, 7, 8, 9, 10]
result = binarySearch(list,-545464)
if(result):
    print("Found!")
else:
    print("Not Found!")