/*
 * Structure member operator and structure pointer operator
 * To compile:
 * $ gcc fig10_02.c -o fig10_02
 */
#include <stdio.h>

// card structure definition
struct card {
    char *face; // define pointer face
    char *suit; // define pointer suit
};

int main(void)
{
    struct card aCard; // define one struct card variable

    // place strings into aCard
    aCard.face = "Ace";
    aCard.suit = "Spades";

    // assign address of aCard to cardPtr
    struct card *cardPtr = &aCard;

    printf("%s%s%s\n", aCard.face, " of ", aCard.suit);

    printf("%s%s%s\n", cardPtr->face, " of ", cardPtr->suit);

    printf("%s%s%s\n", (*cardPtr).face, " of ", (*cardPtr).suit);
}
