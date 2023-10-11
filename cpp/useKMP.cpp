#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int useKMP(string pattern,string text){

    int pattern_length = pattern.length();
    int text_length = text.length();
    //cout<<text_length<<endl;
    int lps[pattern_length];
    int index =0,i,j;
    int isFound = -1;
    for(i=1;i < pattern_length;){
        if(pattern[index]==pattern[i]){

            lps[i]= index + 1;
            index++;
            i++;

        }else{
           if(index != 0 ){
             index= lps[index-1];

           }

            else{
                lps[i]= index;
                 i++;
            }
        }
    }


    i=0,j=0;
    while(i<text_length){
        if(text[i]==pattern[j]){
            i++;
            j++;
        }
        else{
            if(j != 0){
                j=lps[j-1];
            }
            else{
                i++;
            }
        }

        if(j==pattern_length){
            isFound = i - j;
            break;
        }
    }

return isFound;
}

int main(){

    string text="hate love you";
    string pattern="love";

    // printf("Enter Text : ");
    // cin>>text;

   // printf("Enter Pattern : ");
  //  cin >> pattern;

   int index = useKMP(pattern,text);
    if(index ==-1){
      cout <<"("<< pattern <<")is not Found"<<endl;
    }
    else{
        cout <<"("<< pattern <<") is found at index "<<index<<endl;
       //printf("(%s) is found at index %d",pattern,index);
    }
    return 0;
}
