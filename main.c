#include "analyse_lex.h"
#include "Jeton.h"
#include <stdio.h>

int main(int argc, char *argv[]){
    int tab;
    char str;
    // Ask the user to type a character
    printf("Type your character: \n");
    // Get and save the character the user types
    scanf(" %c", &str); // Added a space before %c to skip any whitespace
    tab = analyselexical(str); // Removed char from the function call
    return 0;
}
