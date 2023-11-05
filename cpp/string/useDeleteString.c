#include<stdio.h>
#include<string.h>
void useDeletePattern(char str[],char find[]){
char temp[100]="0";
int i,j=0,k=-1,tem,jump_index=0;
int str_len,find_len;

    str_len= strlen(str);
    find_len= strlen(find);

    for(i=0;k < str_len;i++){
            k++;
            tem= i + jump_index;

        if(str[tem]==find[0]){
            for(j=0;j < find_len;j++){
                if(str[tem] != find[j]){
                    break;
                }
                tem++;
            }
            if(j==find_len){
                jump_index= jump_index + find_len;
                k=k+ find_len;

            }
        }
        str[i]=str[k ];
        temp[i]=str[k];

    }

}

int main(){
  char str[100] = "I Donst Love You!";
  char find[] = "Donst";


  useDeletePattern(str,find);
  printf("\n%s\n",str);
return 0;
}
