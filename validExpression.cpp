#include<iostream>
using namespace std;

int main(){
//string s_stack="a(bc)*de";
string s_stack="[a-m]*";


int k=0;

string text="below";


string temp="";

int text_len = text.size();
int s_stack_len = s_stack.size();
int isValid = true;
int LeftRen =-1;
int RightRen = -1;
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
        if(s_stack[k+1]=='?'){
        int temp_len = temp.size();
        int subCkh=0;
         for(int j=0;j<temp_len;j++){

            if((temp[j]==text[i])){
                if(text[i]==text[i+temp_len]){
                    subCkh++;
                }

                i++;
            }

         if(subCkh>=temp_len){
                    isValid=false;
                }
         }
        }



        k+=2;
}
   if('[' == s_stack[k]){
     k++;
     LeftRen =s_stack[k];
     k+=2;
     RightRen =s_stack[k];

      k +=3;
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
    else if(LeftRen != -1){
        int c_decimal = text[i];
        if( c_decimal<LeftRen || c_decimal > RightRen ){
            isValid=false;
            break;
        }
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
