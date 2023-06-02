#include <iostream>
#include <cstring>
#include <string>

using namespace std;
int main() {
    char str1[30]="unsophisticated" ;
    char str2[30] ="";



    int strLen1 = strlen(str1);
    int strLen2 = strlen(str2);


    int j=0;
    for(int i=0;i<strLen1;i++){
       if(i==0){
        str2[j] = toupper(str1[0]);
        j++;
        continue;
       }
        if(str1[i]== 's'){
        str2[j]= '$';
        j++;
        continue;
       }
       if(str1[i]=='i'){
        str2[j]= '!';
        j++;
        continue;
       }
       if(str1[i]=='o'){
        str2[j]= '(';
        j++;
        str2[j]=')';
        j++;
        continue;
       }

       str2[j]=str1[i];
        j++;

    }
    str2[j]='.';
    cout<<str2<<endl;


    return 0;
}
