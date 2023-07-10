#include<iostream>
using namespace std;


int main(){
string str;
int t,a,b;
cin>>t;

for(int i=0;i<t;i++){
cin>>str;
 int intValueA = str[0];
 cout<<"a:"<<intValueA<<endl;
  a = intValueA - 48;

 int intValueB = str[2];
  b = intValueB - 48;
cout<<a+b<<endl;
}

return 0;
}
