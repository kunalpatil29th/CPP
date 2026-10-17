// // #include<iostream>

// // void increment(int num) {
// //     num += 1; // Local copy of num is modified
// //     std::cout << "Inside Function: " << num << std::endl;
// // }

// // int main() {
// //     int value = 5;
// //     increment(value);
// //     std::cout << "Outside Function: " << value << std::endl; // value remains 5
// //     return 0;
// }


#include<iostream>

void increment(int &num) { // Note the & symbol
    num += 1; // Original num is modified
}

int main() {
    int value = 5;
    increment(value);
    std::cout << "Outside Function: " << value << std::endl; // value is now 6
    return 0;
}