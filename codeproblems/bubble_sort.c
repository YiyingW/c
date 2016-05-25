/*
Bubble Sort: in the outer loop, always put the largest number to the right most,
then the next time, won't look at the numbers at the end of the array.
*/


#include <stdio.h>

#define MAX 10

int main(){
	int a[MAX] = {4,1,3,8,9,0,6,2,7,5};
	
	int x;
	int y;

	for (x=0; x<MAX-1; x++)  // length -1 times check because if length -1 numbers are in place, the last one must be in place
		for (y=0; y<MAX-x-1; y++)  // only check the ones that haven't been placed in the right position
			if (a[y] > a[y+1])  // for the adjacent two numbers, swap if they are in reversed order so that larger number will always go to back
			{
				int t = a[y];
				a[y] = a[y+1];
				a[y+1] = t;
			}
	for (int i=0; i < MAX; i++)
		printf("%d\n", a[i]);

}