#include <stdio.h>
#include <string.h>

void useInsertion(char str[], char find[], char replace[]) {
  char temString[100];

    int i, j, k, find_len, replace_len, str_len;
    int take_index=0,payment_index=0;

      find_len = strlen(find);
      replace_len = strlen(replace);
      str_len = strlen(str);

    int n = str_len ;

      for (i=0;i<n+1;i++){
       int isFind=0;


            for(j=0;j<find_len;j++){
               if(str[i+j] != find[j]){
                isFind=1;
                break;
               }
            }

     if(isFind){
        temString[ i + take_index]=str[i-payment_index];
     }
     else{
        for(j=0;j<replace_len;j++){
            temString[i+j]=replace[j];
        }

        take_index = replace_len - 1;
        payment_index=1;

     }

      }

  //printf("\n%s |%d|",temString,strlen(temString));
  n = strlen(temString);

  for(i=0;i<n;i++){
    str[i]=temString[i];
  }
}




int main() {

  char str[100] = "I love Bangladesh";
  char find[] = "love";
  char replace[] = "have ";



    printf("Input a String: ");
    gets(str);
    printf("Target a Parttern: ");
    gets(find);
    printf("Value: ");
    gets(replace);

  useInsertion(str, find, replace);

 printf("%s",str);

  return 0;
}
