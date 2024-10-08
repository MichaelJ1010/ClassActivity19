 #include <iostream>
 #include "./swap.hpp"

 using namespace std;

 int main(){
    int number1 = 10;
    int number2 = 20;
    cout << "number1: " << number1 << endl << "number2: " << number2 << endl;
    swap::swap(&number1, &number2);
    cout << "after swap" << endl;
    cout << "number1: " << number1 << endl << "number2: " << number2 << endl;
 }