#include<stdio.h>

int main(){
int arr1[5]={1,50,60,70,80};
int arr2[10]={12,14,15,20,20,40,60,80,85,100};
int arr3[20];

int i=0,j=0,k=0;
while(k<15){

    if(i>=5){
        arr3[k]=arr2[j];
        j++;
        k++;
        continue;
    }
    if(j>=10){
        arr3[k]=arr1[i];
        i++;
        k++;
        continue;
    }


    if(arr1[i]<=arr2[j]){
        arr3[k]=arr1[i];
        i++;
    }
    else{
        arr3[k]=arr2[j];
        j++;
    }
k++;
}



for(i=0;i<15;i++){
    printf("%d, ",arr3[i]);
}

return 0;
}
