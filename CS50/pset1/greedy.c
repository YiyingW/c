#include <cs50.h>
#include <stdio.h>
#include <math.h>

int main(void)
{
    printf("O hai!");
    float n;
    do
    {
        printf("How much change is owed?\n");
        n = GetFloat();
    } while(n<0);

    int cents = (int) round(n*100);

    int sum = 0;
    int number = cents/25;
    cents = cents - number*25;
    sum += number;
    
    number = cents/10;
    cents = cents - number*10;
    sum += number;
    
    number = cents/5;
    cents = cents - number*5;
    sum += number;
    
    number = cents/1;
    sum += number;
    
    printf("%i\n", sum);
}