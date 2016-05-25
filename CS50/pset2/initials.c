/*
input: a full name, assume no special non-characteristic letters
output: initials of the name (all capital)
*/


#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(void){
    string name = GetString();
    char initials[50];  // used to store the initials
    initials[0] = name[0]; 
    int j=0;
    int len = strlen(name);
    for (int i=0; i<len; i++)
        if (strncmp(&name[i], " ", 1) == 0){
            j++;
            initials[j] = name[i+1];
        }
    for (int i=0; i <= j; i++){
        if (((int) initials[i]) >= 97 && ((int) initials[i]) <= 122){
            printf("%c", (char) ((int) initials[i]) - (97-65));  //convert to uppercase if lowercase was input
        }else{
            printf("%c", initials[i]);
        }
        
    }
    printf("\n");
        
    
    return 0;
}