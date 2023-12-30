#include <stdio.h>
#include <ctype.h>

int main() {
    char user_input;
    printf("Enter a character: ");
    scanf(" %c", &user_input);

    if (!isalpha(user_input) && !isdigit(user_input)) {
        printf("The character entered is a special symbol.\n");
    } else {
        printf("The character entered is not a special symbol.\n");
    }

    return 0;
}
