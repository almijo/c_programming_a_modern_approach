// Simulates the game of craps.

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {
    srand(time(NULL));

    for (;;) {
        play_game() ? printf("You win!") : printf("You lose!");
        printf("\n\nPlay again? (y/n) ");

        if (getchar() == 'n')
            break;
        else
            printf("\n");
    }
}

int roll_dice(void) {
    int die1 = rand() % 6 + 1;
    int die2 = rand() % 6 + 1;
    return die1 + die2;
}

bool play_game(void) {
    int roll = roll_dice();
    printf("You rolled: %d\n", roll);

    if (roll == 7 || roll == 11)
        return true;
    else if (roll == 2 || roll == 3 || roll == 12)
        return false;

    int point = roll;

    for (;;) {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);

        if (roll == point)
            return true;
        else if (roll == 7)
            return false;
    }
}