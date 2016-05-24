#include <stdio.h>

/* 
In an arithmetic right shift, we shift values to the right but fill in the new bits with the value of the sign bit.
In a logical right shift, we shift the bits and put a 0 in the most significant bit.

*/

int repeatedArithmeticShift(int x, int count){
    for (int i=0; i < count; i++){
        x >>= 1; // Arithmetic shift by 1
    }
    return x;
}

int repeatedLogialShift(int x, int count){
    for (int i = 0; i < count; i++){
        x >>>= 1; // Logical shift by 1
    }
    return x;
}


int main(void){
    int x = -93242;
    int count = 40;
    int a = repeatedArithmeticShift(x, count);
    int b = repeatedLogicalShift(x, count);
    printf("%i\n", a);
    printf("%i\n", b);
    
}