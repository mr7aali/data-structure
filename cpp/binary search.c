#include<stdio.h>

int BinarySearch(int arr[],int TerGetValue){
int low=0,heigh=10;
while(low<=heigh){
        int mid = (low+heigh)/2;
    if(arr[mid]== TerGetValue){
        return 1;

    }
    else if(arr[mid] > TerGetValue){
        heigh = mid -1;
    }
    else {
        low= mid +1;
    }
if(heigh<low){
    return 0;
}


}

}

int main(){
int s,i, arr[10]={1,2,3,4,5,6,7,8,90,100};



for(i=0;1;i++){
printf("Inter a value: ");
scanf("%d",&s);
    if(s==111)
        break;
 if(BinarySearch( arr,s)){
    printf("The Value %d is exists in Array\n\n",s);
}
else{
    printf("The Value %d Does not exists in Array\n",s);
}

}


return 0;
}
