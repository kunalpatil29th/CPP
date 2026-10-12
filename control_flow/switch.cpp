#include<iostream>
using namespace std;

int main(){

    // switch statement
    char grade;
    cout<<"Enter your grade";
    cin>>grade;


    switch(grade)
    {
    case 'A':
        cout<<"your marks will be in range 90 to 100";
        break;
    case 'B':
        cout<<"your marks will be in range 80 to 90";
        break;
    case 'C':
        cout<<"your marks will be in range 80 to 70";
        break; 
    case 'D':
        cout<<"your marks will be in range 70 to 60";
        break;   

    default:
        break;
    }


    



    return 0;
}