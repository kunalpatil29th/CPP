#include<iostream>
using namespace std;

int main(){

         // decalre
         // int arr[5][5];

         // initalization of 2D- array
        //  int arr[5][5] = {{1,2,3,4,5}, {1, 2,3, 4 ,5 }};
        //  cout<<arr[0][4]<<endl;


        // full array acess array
        int arr[3][4] ={{10,20,30,40},
                        {11,12,13,14},
                        {21,22,23,24} };

        int row = 3;
        int col = 4;

        // printing
        for(int row_index = 0; row_index<=row-1; row_index++){
            for(int col_index=0; col_index<=col-1; col_index++){
                cout<<arr[row_index][col_index]<<" ";
            }
            cout<<endl;
        }
     





    return 0;
}