/*
a program that encrypts messages using vigenere's cipher
*/

#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

// function to check if a string contain non-alphabet 
int CheckAlpha(string s){
	int len = strlen(s);
	for (int i=0; i < len; i++){
		if (!isalpha(s[i])){
			return 1;
		}
	}
	return 0;
}

// function to shift a letter given an integer k
// input: an alphabet letter, an integer in range [0, 25]
// output: an integer ASCII code 
int shiftLetter(char s, int k){
    if (isupper(s)){
        int current = (int) s;
        int p = current - 65;
        int c = (p + k)%26;
        return c+65;
        }else if (islower(s)){
                int current = (int) s;
                int p = current - 97;
                int c = (p + k)%26;
                return c+97;
          }
    return 0;
}



int main(int argc, string argv[]){
    
    /* Check if  a proper keyword is provided */
    if (argc != 2 ) {
        printf("Please indicate a proper keyword\n");
        return 1;
    }else if (CheckAlpha(argv[1]) == 1) {
    	printf("Keyword can only contain letters\n");
    	return 1;
    }
    
    string keyword = argv[1];
    // convert the keyword to a numeric array
    int len = strlen(keyword);
    int numberkey[len];
    for (int i=0; i<len; i++){
        if (isupper(keyword[i])){
            numberkey[i] = (int) keyword[i] - 65;
        }else if(islower(keyword[i])){
            numberkey[i] = (int) keyword[i] - 97;
        }
    }
    
    // start interate the text
    string text = GetString();
    int textlen = strlen(text);
    int l=-1; // l is used to track where we are in the plaintext excluding the non-characters
    for (int i=0; i < textlen; i++){
        //check if letter is non-alphabet, if it is non-character, printout
        if (!isalpha(text[i])){
            printf("%c", text[i]);
        }else{
            l++;
            int local_k = numberkey[l%len];
            printf("%c", (char) shiftLetter(text[i], local_k));
        }
        
    }
    
    printf("\n");
    
    
    return 0;
}