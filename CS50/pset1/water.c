#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int minutes;
    do
    {
        printf("minutes: ");
        minutes = GetInt();
    } while ( minutes <= 0);
    
    printf("minutes: %i\n", minutes);
    int bottles = minutes*12;
    printf("bottles: %i\n", bottles);
}