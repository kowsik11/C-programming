#include <stdio.h>

int main() {
    int matchsticks = 21;
    int userPick, compPick;

    printf("Welcome to the Matchstick Game!\n");
    printf("Rules: There are 21 matchsticks. Pick 1, 2, 3, or 4 matchsticks. The one who picks the last one loses.\n");

    while (matchsticks > 0) {
        // User's turn
        printf("\nRemaining matchsticks: %d\n", matchsticks);
        printf("Your turn - Pick 1, 2, 3, or 4 matchsticks: ");
        scanf("%d", &userPick);

        if (userPick < 1 || userPick > 4 || userPick > matchsticks) {
            printf("Invalid input. Please pick 1, 2, 3, or 4 matchsticks.\n");
            continue;
        }

        matchsticks -= userPick;

        if (matchsticks == 0) {
            printf("Congratulations! You picked the last matchstick. Computer wins!\n");
            break;
        }

        // Computer's turn
        compPick = 5 - userPick; // Ensure the computer always wins
        printf("Computer picks %d matchsticks.\n", compPick);

        matchsticks -= compPick;

        if (matchsticks == 0) {
            printf("Computer picked the last matchstick. You lose!\n");
        }
    }

    return 0;
}
