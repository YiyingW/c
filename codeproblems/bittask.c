#include <stdio.h>
#include <cs50.h>
#include <stdbool.h>

// get bit: this method shifts 1 over by i bits, perform AND with num to get the bit at bit i

bool getBit(int num, int i){
    return ((num & (1 << i)) != 0);
}

//set bit: this method shifts 1 over by i bits, perform OR with num to change the bit at bit i to be 1, note: it might already is a 1
int setBit(int num, int i){
    return num | (1 << i);
}

//clear bit: this method clear the ith bit and leave the remainder unchanged
int clearBit(int num, int i){
    int mask = ~(1 << i);
    return num & mask;
}

// clear all bits from the most significant bit through i (inclusive)
int clearBitsMSBthroughI(int num, int i){
    int mask = (1 << i) - 1;
    return num & mask;
}


int main(void){
    int i = 3;
    int j = 1 << i;
    printf("%i\n", j);
}