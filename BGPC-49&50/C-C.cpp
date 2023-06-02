#include<iostream>
using namespace std;




int main(){
string str;
int t;
cin>>t;

for(int i=0;i<t;i++){
cin>>str;

int intValueA = str[0];
int a=intValueA - 48;
int intValueB = str[2];
int b=intValueB - 48;
cout<<a+b<<endl;


}



return 0;
}
