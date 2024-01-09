#include<iostream>
using namespace std;


void displayArray(int S[],int n){
    for(int i=0;i<n;i++){

    cout<<S[i]<<" ,";
    }
   cout<<endl;
}

int main(){
    int S[]={1,4, 5, 9,2,7};
    int F[]={2,4,10,10,3,8};
    int S_len = sizeof(S)/sizeof(S[0]);
    int F_len = sizeof(F)/sizeof(F[0]);
    int task=0;


    for(int i=0;i<S_len;i++){
        for(int j=i;j<S_len;j++){
            if(F[i]>F[j]){
                swap(F[i],F[j]);
                swap(S[i],S[j]);
            }

        }
    }

    int i=0,j=1;
    while(j<S_len){
        if(F[i]<=S[j]){
            task++;
            i++;
        }
        j++;
    }

 cout<<"Total task "<<task<<endl;
return 0;
}
