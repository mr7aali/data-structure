#include<stdio.h>
int main(){
int k,p,i,value, a[100]={5,6,7,8,10,12};
printf("index: ");
scanf("%d",&p);
//printf("Value: ");
//scanf("%d",&value);

for(i=p;i<10;i++){
    a[i]=a[i+1];
}

for(i=0;i<10;i++){
    printf("%d,",a[i]);
}

return 0;
}
