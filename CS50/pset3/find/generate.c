/**
 * generate.c
 *
 * Computer Science 50
 * Problem Set 3
 *
 * Generates pseudorandom numbers in [0,LIMIT), one per line.
 *
 * Usage: generate n [s]
 *
 * where n is number of pseudorandom numbers to print
 * and s is an optional seed
 */
 
#define _XOPEN_SOURCE

#include <cs50.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// constant
#define LIMIT 65536

int main(int argc, string argv[])
{
    // Check if the command-line input has n or s, if n or s is not provided 
    // or more than two numbers are given, print usage instruction.
    if (argc != 2 && argc != 3)
    {
        printf("Usage: generate n [s]\n");
        return 1;
    }

    // convert the first input after generate into integer and put it in variable n
    int n = atoi(argv[1]);

    // check if s (seed) is given and perform differently based on conditions
    // initialize a sequence of pseudo-random numbers 
    // must envoke srand48 before calling drand48
    if (argc == 3)
    {
        srand48((long int) atoi(argv[2]));  // set seed for random number generator
    }
    else
    {
        srand48((long int) time(NULL));
    }

    // print out n random numbers 
    for (int i = 0; i < n; i++)
    {
        printf("%i\n", (int) (drand48() * LIMIT));
    }

    // success
    return 0;
}