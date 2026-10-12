#include <iostream>
using namespace std;

int main()
{

    // arry
    // declaration
    // int arr[100];

    //    / cout<<multiple2[4]<<endl;

    // // traverse
    // for(int index= 0; index <= 9; index++){
    //     cou // //initialisation
    // // int arr[3] = {30 , 35 ,66};

    // int multiple2[10] = {2, 4, 6, 8, 10, 12 ,14, 16, 18 , 20};
    // /t<<multiple2[index]<<" ";
    // }

    // // input in array
    // int arr[5];

    // for(int index = 0; index <= 9; index++){
    //     cout<<"Enter the value of arr["<<index>>"];
    //     cin>>arr[index];
    // }

    // sum of array
    int arr[] = {10, 20, 30, 40, 50};
    int sum = 0;
    for (int index = 0; index <= 4; index++)
    {
        sum = sum + arr[index];
    }
    cout << "Total sum : " << sum << endl;

    return 0;
}