/**
 * helpers.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Helper functions for Problem Set 3.
 */
       
#include <cs50.h>


#include "helpers.h"
int re_search(int value, int values[], int left, int right){
    if (left == right) {
        if (value == values[left]) return 1;
        else return 0;
    }
    while (left <right){
        int middle = (left+right)/2;
        if (value == values[middle]) {return 1;}
        else if (value < values[middle]){
            return re_search(value, values, left, middle - 1);
        }else{
            return re_search(value, values, middle+1, right);
        }
    }
    return 0;
}

/**
 * Returns true if value is in array of n values, else false.
 */

bool search(int value, int values[], int n)
{

    if ((re_search(value, values, 0, n)) == 1) return true;
    else return false;

    
}

/**
 * Sorts array of n values.
 */
void sort(int values[], int n)
{
    int index;
    // Selection sort
    for (int i = 0; i < n-1; i++){
        int min = values[i];
        for (int j = i+1; j < n; j++){
            if (values[j] < min){
                min = values[j];
                index = j;
            }
        }
        values[index] = values[i];
        values[i] = min;
    }
    return;
}