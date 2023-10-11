list =[10,8,5,4,3,]
list_len=len(list)

for i in range(list_len):
  #  for j in range(list_len):
  j=i
  while(j<list_len):
        if(list[i]>list[j]):
            temp=list[i]
            list[i]=list[j]
            list[j]=temp
        j=j+1
print(list)
