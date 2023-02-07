#include<stdio.h>

int InsertValue(int *a,int p,int value,int *n){
int k,i,t;

for(i=p;i< *n;i++){
    t= a[p];
    a[p]=a[i+1];
    a[i+1]=t;
    //printf("%d, ",a[i]);

  //  for(k=0;k<n;k++){
  //  printf("%d,",a[k]);
  //}
//printf("\n");
}
a[p]=value;
*n=*n+1;
}

int main(){
int k,p,i,value,n=6, a[100]={5,6,7,8,10,12};

while(1){

    printf("index: ");
    scanf("%d",&p);

    if(p>99){
        printf("Sorry! You have to increase storage\n");
        break;
    }
    else if(p>n){
         printf("Sorry! Max position is %d\n",n-1);
         continue;
    }
     printf("Value: ");
    scanf("%d",&value);
  InsertValue(&a,p,value,&n);



printf("\n\n");
for(i=0;i<n;i++){
    printf("%d,",a[i]);
}
printf("\n");
}



return 0;
}
