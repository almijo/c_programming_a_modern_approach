// Classifies a poker hand
// 2d array hand replaces num_in_rank and num_in_suit

#include <ctype.h>
#include <limits.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5
#define RANK 0
#define SUIT 1

// external variables
int hand[NUM_CARDS][2];
bool straight, flush, four, three;
int pairs; // can be 0, 1, or 2

// prototypes
void read_cards(void);
void analyze_hand(void);
void print_result(void);

/**********************************************************************
 * main: Calls read_cards, analyze_hand, and print_result repeatedly. *
 **********************************************************************/
int main(void) {
    for (;;) {
        read_cards();
        analyze_hand();
        print_result();
    }
}

/****************************************************************************************
 * read_cards: Reads the cards into the external variables num_in_rank and num_in_suit  *
 * checks for bad cards and duplicate cards.                                            *
 ****************************************************************************************/
void read_cards(void) {
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card;
    int cards_read = 0;

    while (cards_read < NUM_CARDS) {
        bad_card = false;
        printf("Enter a card: ");

        switch (rank_ch = tolower(getchar())) {
        case '0':
            exit(EXIT_SUCCESS);
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            rank = rank_ch - '2';
            break;
        case 't':
            rank = 8;
            break;
        case 'j':
            rank = 9;
            break;
        case 'q':
            rank = 10;
            break;
        case 'k':
            rank = 11;
            break;
        case 'a':
            rank = 12;
            break;
        default:
            bad_card = true;
        }

        switch (suit_ch = tolower(getchar())) {
        case 'c':
            suit = 0;
            break;
        case 'd':
            suit = 1;
            break;
        case 'h':
            suit = 2;
            break;
        case 's':
            suit = 3;
            break;
        default:
            bad_card = true;
        }

        while ((ch = getchar()) != '\n')
            if (ch != ' ')
                bad_card = true;

        if (bad_card) {
            printf("Bad card; ignored.\n");
            continue;
        }

        bool duplicate_card = false;
        for (int card = 0; card < cards_read; ++card) {
            if (hand[card][RANK] == rank && hand[card][SUIT] == suit) {
                duplicate_card = true;
                break;
            }
        }

        if (duplicate_card)
            printf("Duplicate card; ignored.\n");
        else {
            hand[cards_read][RANK] = rank;
            hand[cards_read][SUIT] = suit;
            ++cards_read;
        }
    }
}

/**************************************************************
 * analyze_hand: Determines whether the hand contains a       *
 * straight, a flush, four-of-a-kind, and/or three-of-a-kind; *
 * determines the number of pairs;                            *
 * stores the results into the external variables             *
 * straight, flush, four, three, and pairs.                   *
 **************************************************************/
void analyze_hand(void) {
    int num_consec = 1;
    int rank, suit;

    straight = true;
    flush = true;
    four = false;
    three = false;
    pairs = 0;

    // check for flush
    for (int card = 1; card < NUM_CARDS; ++card) {
        if (hand[card][SUIT] != hand[0][SUIT]) {
            flush = false;
            break;
        }
    }

    // selection sort by rank
    for (int i = 0; i < NUM_CARDS - 1; ++i) {
        int jmin = i;

        for (int j = i + 1; j < NUM_CARDS; ++j) {
            if (hand[j][RANK] < hand[i][RANK]) {
                jmin = j;
            }
        }

        if (jmin != i) {
            rank = hand[i][RANK];
            suit = hand[i][SUIT];
            hand[i][RANK] = hand[jmin][RANK];
            hand[i][SUIT] = hand[jmin][SUIT];
            hand[jmin][RANK] = rank;
            hand[jmin][SUIT] = suit;
        }
    }

    for (int card = 0; card < NUM_CARDS - 1; ++card) {
        if (hand[card][RANK] != hand[card + 1][RANK] - 1) {
            straight = false;
            break;
        }
    }

    if (straight)
        return;

    // check for straight, 4-of-a-kind, 3-of-a-kind, and pairs
    for (int card = 0; card < NUM_CARDS; ++card) {
        if (card == NUM_CARDS - 1 || hand[card][RANK] != hand[card + 1][RANK]) {
            if (num_consec == 4)
                four = true;
            else if (num_consec == 3)
                three = true;
            else if (num_consec == 2)
                pairs++;

            num_consec = 1;
        }
        else
            ++num_consec;
    }
}

/*******************************************************
 * print_result: Prints the classification of the hand *
 * based on the values of the external variables       *
 * straight, flush, four, three, and pairs.            *
 *******************************************************/
void print_result(void) {
    if (straight && flush)
        printf("Straight flush");
    else if (four)
        printf("Four of a kind");
    else if (three && pairs == 1)
        printf("Full house");
    else if (flush)
        printf("Flush");
    else if (straight)
        printf("Straight");
    else if (three)
        printf("Three of a kind");
    else if (pairs == 2)
        printf("Two pairs");
    else if (pairs == 1)
        printf("Pair");
    else
        printf("High card");

    printf("\n\n");
}