#include<iostream>
using namespace std;

int main(){
    // char arr[10];
    // cout<<arr[3]<<endl;


    // char arr[10] = "Kunal";
    // cout<<arr[1]<<endl;
    // arr[3] = 'w';
    // cout<<arr<<endl;

    int arr[10] = {1, 2,3 ,4, 5, 6, 7, 8, 9,10};
    cout<<arr<<endl; // print address value

    // char value print not print address value only print a String value
    char brr[10]= "kunal";
    cout<<brr<<endl;

    for(int i =0; i<5; i++){
        cout<<arr[i]<<" ";
    }








    return 0;
}