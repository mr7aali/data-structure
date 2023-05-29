#include<iostream>
using namespace std;
int sum=0;

int convertToBinary(int decimal){
   if(decimal >1){
     sum=  sum + decimal % 2;
   return convertToBinary(decimal/2);
   }
   else if(decimal == 0){
    return 0;
   }
   sum++;
}
int totalDistance(int D){
  if(D>=0){
        convertToBinary(D);
        D--;
    return totalDistance(D);
  }
}
int main(){
  int distance;
  cin>>distance;
 totalDistance(distance);
cout<<sum<<endl;
return 0;
}
