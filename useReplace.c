#include <stdio.h>
#include <string.h>

void useReplace(char str[], char find[], char replace[]) {
  char temp[100]="";
  int i, j, k;
  int find_len, replace_len, str_len;
  int tem=0,found_Index=-1,payRep_len=0,payTer_len=0;

  find_len = strlen(find);
  replace_len = strlen(replace);
  str_len = strlen(str);



  for(i=0; i<str_len;i++){
        tem = i;
    if(str[i] == find[0]){
        for(j=0;j<find_len;j++){

           if(str[tem] != find[j] ){

            break;
           }
           if( (j+1) == find_len){

            found_Index=i;
                for(j=0;j < replace_len ;j++){
                    temp[found_Index]=replace[j];
                    found_Index++;

                }

           //  if(replace_len == find_len){
                //i=i+replace_len;
          //   }
           //  else{
                payRep_len= replace_len;
                payTer_len= find_len;
            // }
             //else if(find_len < replace_len ){
             //   payRep_len= replace_len;
            //    payTer_len= find_len;
           //  }
            // else if(replace_len < find_len){
           //     payRep_len = replace_len;
            //    payTer_len = find_len;
            // }

           }
        tem ++;
        }
    }
    temp[i + payRep_len]=str[ i + payTer_len];


}


 printf("{ %s }",temp);



  }








int main() {
  char str[100] = "Fuck You! Fuck you so much . Fuck";
  char find[] = "Fuck";
  char replace[] = "Love";

   // printf("Input a String: ");
   // gets(str);
   // printf("Target a Parttern: ");
  //  gets(find);
  //  printf("Value: ");
  // gets(replace);


  useReplace(str, find, replace);

  //printf("Replaced string: %s\n", str);

  return 0;
}
