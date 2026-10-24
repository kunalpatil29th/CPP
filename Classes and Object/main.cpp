// #include<iostream>
// using namespace std;
// commentts

// // class creattion
// class student{
//     public:
//     // properties // data member

//     int age;
//     int height;
//     int weight;
//     string name;

//     // behavior // member function
//     void running (){

//         cout<< "I am Running "<<endl;

//     }

//     void studying (){
//         cout<<name<<"is studying : "<<endl;
//     }


// };

// int main(){
//     // cout<<sizeof(student)<<endl;

//     // object creation

//     // static way
//     student s1;

//     // dynamic way
    
 




//     return 0;
// }


// #include <iostream>
// using namespace std;

// class Student {
// public:
//     string name;
//     int age;

//     void display() {
//         cout << "Name: " << name << endl;
//         cout << "Age: " << age << endl;
//     }
// };

// int main() {
//     Student s1;

//     s1.name = "Kunal";
//     s1.age = 20;

//     s1.display();

//     return 0;
// }




// real life example

#include <iostream>
using namespace std;

class Car {
public:
    string brand;
    string color;

    void start() {
        cout << brand << " is starting" << endl;
    }

    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Color: " << color << endl;
    }
};

int main() {
    Car c1, c2;

    c1.brand = "BMW";
    c1.color = "Black";

    c2.brand = "Toyota";
    c2.color = "White";

    c1.display();
    c1.start();

    cout << endl;

    c2.display();
    c2.start();

    return 0;
}
