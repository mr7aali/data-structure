#include<iostream>
using namespace std;
int arr_stack[100],sum=0;
int k=-1;

void convertToBinary(int decimal){

for(int i=0; ;i++){
        if(decimal==1){
        k++;
        arr_stack[k]=1;
        sum++;
        break;
        }
        else if(decimal==0){
            k++;
            arr_stack[k]=0;
            break;
        }
        k++;
      arr_stack[k]=decimal%2;
      sum=sum+decimal%2;
      decimal = decimal/2;

}
for(int i=0;i<=k;i++){
    cout<<"S"<<arr_stack[i]<<endl;
}
cout<<"-----"<<endl;
}


int main(){
int decimal=5   ;


for(decimal;decimal>=0;decimal--){
    //cout<<decimal<<endl;
    convertToBinary(decimal);
}


cout<<"K:"<<k<<endl;
cout<<"Sum :"<<sum<<endl;
return 0;
}
