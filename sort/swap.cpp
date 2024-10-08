#include <iostream>
#include "./swap.hpp"

using namespace std;

namespace swap{
    void swap(int* number1, int* number2){
        int temporaryHolder = *number1;
        *number1 = *number2;
        *number2 = temporaryHolder;
    }
}