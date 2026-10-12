#include<iostream>

using namespace std;

int main(){
    // for loops

    // // for(initialization; conditon ; update){
          // code execute

    // }

    // for (int i = 1; i <= 10; i = i+1 ){ // i++
    //     cout<<"print kunal: "<<endl;
    // }

    // for(int i = 1; i <= 10; i =  i+1 ){
    //     cout<<i<<endl;
    // }


    // break keyword: **** interview
    // for( int i= 1; i <=10; i=i+1){
    //     if(i == 5){
    //         break;
    //     }
    //     cout<<"iteration"<<i<<endl;
    // }


    // countinue statement
    // for(int i = 1; i <= 5; i = i+1){
    //     if(i == 4){
    //         continue;
    //     }
    //     cout<<"iteration"<<i<<endl;
    // }

    // while loop
    int i = 1;
    // while(i <= 10){
    //     cout<<i<<endl;
    //     i = i+1;
    // }

    // do-while loop in c++
    // do {
    //     cout<<"Iteration"<<i<<endl;
    //     i = i+1;
    // }while(i <= 5);


    // nested loop **** interview question
    // for(int i = 1; i <= 5; i  = i+1 ); // answer / output : 1 
    // {
    //     cout<<i;
    // }

    // nested loop
    for(int i = 1; i <= 3; i = i+ 1){
        for(int j = 1; j <= 3; j = j+1){
            cout<<i<<j<<" ";
        }
        cout<<endl;
    }



    return 0;
}

