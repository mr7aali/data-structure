#include<stdio.h>
#include<string.h>

int useWordCount(char str[]){

int i,j,word_count=1;
int str_len= strlen(str);
for(i=0;i<str_len;i++){
    if(str[i] == ' ' && str[i+1] != ' '  ){
        word_count++;
    }
    if(i==0 && str[0] == ' '){
        word_count--;
    }
    if( i == str_len-1 && str[i] == ' '){
        word_count--;
    }
}
return word_count;

}


int main(){
char str[]="  i love you!  ";


int word =useWordCount(str);
printf("Word:{ %d }\n",word);
return 0;
}
