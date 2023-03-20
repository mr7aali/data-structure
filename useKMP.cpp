#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void useKMP(string pattern){

    int pattern_length = pattern.length();
    int lps[pattern_length];

    int index =0,tem=0;

    for(int i=1;i < pattern_length;){
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



    for(int tem=0;tem<pattern_length;tem++){
         cout<<lps[tem]<<",";
    }
}

int main(){

    string text, pattern="aabaabaaa";

    // printf("Enter Text : ");
    // cin>>text;

   // printf("Enter Pattern : ");
  //  cin >> pattern;

    useKMP(pattern);

    return 0;
}
