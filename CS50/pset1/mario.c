#include <stdio.h>
#include <cs50.h>

int main(void)
{
    int h;
    
    do{
    printf("Height: ");
    h = GetInt();
    if (h == 0) {return 0;}
    } while (h<0 || h >=24);
    for (int i=1; i<=h; i++)
    {
        int n_space=h - i;
        for (int j=1; j<=n_space; j++) { printf(" ");}
        for (int j=1; j<=i; j++) { printf("#");}
        printf("#");
        printf("\n");
    }
    return 0;
}