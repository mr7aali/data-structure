#include <iostream>
using namespace std;
int col=8;
void display2D_Array(int PiWi[][8], int row, int col) {
    int i = 0, j = 0;
    while (i < row) {
        if (j < col) {
            cout << PiWi[i][j] << " ";
            j++;
            continue;
        }
        cout << endl;
        j = 0;
        i++;
    }
}

int main() {
    int profit[] = {1, 2, 5, 6};
    int weight[] = {2, 3, 4, 5};
    int weight_level = 8;
    int profit_len = sizeof(profit) / sizeof(profit[0]);
    int weight_len = sizeof(weight) / sizeof(weight[0]);

    int PiWi[profit_len][8];

    int i=0,j=0;
    while(i<profit_len){
        if(j<weight_level){
         //---------------------

        if(j==0 || i==0){
            PiWi[i][j]=0;
        } else if( weight[i-1]<=j){

          PiWi[i][j] = max(profit[i - 1] + PiWi[i - 1][j - weight[i - 1]], PiWi[i - 1][j]);



       } else {
                  PiWi[i][j] = PiWi[i - 1][j];
            }

       //---------------------
        j++;
        continue;
        }
        j=0;
        i++;
    }


    display2D_Array(PiWi, 4, 8);

    return 0;
}
