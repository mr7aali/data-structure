#include<stdio.h>
#include <string.h>
int findLine(char s1[100],char s2[100]){
    int i,j,tem;

int length = strlen(s1);
//printf("%d",length);
for(i=0; i<strlen(s1);i++){
        tem = i;
    if(s1[i] == s2[0]){
        for(j=0;j<strlen(s2);j++){

           if(s1[tem] != s2[j] ){
               // printf("not Found");
            break;
           }
           if( (j+1) == strlen(s2)){
            return 1;
            //printf("Found");
           }
        tem ++;
        }
    }
}

return 0;
}


int main(){

char string1[100]="abcdefghijklmnopqrstuvwxyz";
char string2[100];
printf("Input String:");
scanf("%s",string2);

 int r =findLine(string1,string2);
if(r){
    printf("( %s ) is Exist in string1",string2 );
}
else{
    printf("Error! ( %s ) is not Exist in string1",string2 );
}
return 0;
}
