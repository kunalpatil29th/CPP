#include<iostream>
using namespace std;

 int getMultiplication(int x , int y , int z){
        int result  = x * y * z;
        return result;
    }


void name(){
    cout<<"kunal"<<endl;
}

int main(){

    int totalmulti = (4 , 5 ,3);
    cout<<totalmulti<<endl;

    name();

    return 0;
}