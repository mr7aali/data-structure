list1 =[20,40,60,80,100,1,2]
list2 =[10,30,50,70,90,10,50,9,50,99]
list1 = sorted(list1)
list2 = sorted(list2)
merge_list=[]

list1_len = len(list1)
list2_len= len(list2)
i=0
j=0

while i< list1_len and j < list2_len:
    if list1[i] < list2[j]:
        merge_list.append(list1[i])
        i+=1
    else:
        merge_list.append(list2[j])
        j+=1

while i < list1_len:
    merge_list.append(list1[i])
    i+=1

while j <list2_len:
    merge_list.append(list2[j])
    j+=1


print(merge_list)