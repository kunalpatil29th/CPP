#include<iostream>
using namespace std;

int main(){

    int a = 5;
    int &temp = a;

    cout<<temp<<endl;
    temp--;
    cout<<temp<<endl;
    temp = temp*19;
    cout<<temp<<endl;
    temp++;
    cout<<temp<<endl;




    return 0;
}