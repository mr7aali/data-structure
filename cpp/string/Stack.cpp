#include<iostream>
#include<string>
using namespace std;

int top=-1;
int stk=5;

int stk_store[5];


void push(int x){
    if(stk == 0){
   // printf("Overflow");
  // return;
    }
    else{
    top++;
    stk--;
    stk_store[stk]=x;
    }
}

int main(){

push(0);
push(1);
push(2);
push(3);
push(4);
push(5);


push(6);
push(7);
push(8);
push(9);

//cout<<"String: "<< stk_store<<endl;
cout<<"Stack: ";
for(int i=0;i<5;i++){
    cout<< stk_store[i];
}
return 0;
}
