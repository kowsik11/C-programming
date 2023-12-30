#include <stdio.h>

int main() {
    char user_input;
    printf("Enter a character: ");
    scanf(" %c", &user_input);

    if ('a' <= user_input && user_input <= 'z') { 
        printf("It's a lowercase alphabet.\n");
    } else {
        printf("It's not a lowercase alphabet.\n");
    }

    return 0;
}

