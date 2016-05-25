/*
a program that encrypts messages using Caesar's cipher. 
accept a single command-line argument: a non-negative integer k. procced to prompt the 
user for a string of plaintext and then output that text with each alphabetical character
rotated by k positions.
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[]){
    if (argc != 2){
        printf("Please indicate one and only one non-negative integer k\n");
        return 1;
    }
    
    int k= atoi(argv[1]);
    k = k%26;
    string text = GetString();
    int len = strlen(text);
    for (int i=0; i<len; i++){
        if (!isalpha(text[i])){
            printf("%c", text[i]); // if this is not alphabeta, output as it is
        }
        else{  // divide into uppercase senario and lowercase senario
            if (isupper(text[i])){
                int current = text[i];
                int p = current - 65;
                int c = (p + k)%26;
                printf("%c", (char) c+65);
                
            }else if (islower(text[i])){
                int current = text[i];
                int p = current - 97;
                int c = (p + k)%26;
                printf("%c", (char) c+97);
            }
            

        }
        
    }
    printf("\n");
    
    return 0;
}