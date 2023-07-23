#include<iostream>
using namespace std;

int main(){
string s_stack="a(bc)*de";
cout<<"Inter Expression : ";
cin>>s_stack;
int k=0;

string text="ade";
cout<<"Inter text : ";
cin>>text;


string temp="";

int text_len = text.size();
int s_stack_len = s_stack.size();
int isValid = true;

for(int i=0;i<text_len;i++){

  if('(' == s_stack[k]){
        k++;
        while(')' != s_stack[k]){
        temp.push_back(s_stack[k]);
        k++;
        }

       if(s_stack[k+1]=='+'){
            int temp_len = temp.size();
         for(int j=0;j<temp_len;j++){
            if(temp[j]==text[i]){
                i++;
            } else{
            isValid = false;
            break;
            }
         }
       }


        k+=2;
}
 if(!isValid){
     break;
 }

   if(s_stack[k] == text[i]){
        k++;

    }
    else  if (text[i]==temp[0]){
        int temp_len = temp.size();
        for(int j=0;j<temp_len;j++){
            if(text[i]==temp[j]){
                    i++;
                continue;
            }
            else{
          //  cout<<"Invalid text"<<endl;
           isValid=false;
              break;
            }

        }
         i--;
    }

    else{
       // cout<<"Invalid text"<<endl;
        isValid=false;
            break;
    }
if( ((i+1)== text_len) && (s_stack_len==k) ){
    isValid= true;
}
}

if(isValid){
    cout<<"Valid text"<<endl;
}
else{
    cout<<"Invalid text"<<endl;
}
return 0;
}
