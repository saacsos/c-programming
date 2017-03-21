/*
 * Card shuffling and dealing program using structures
 * To compile:
 * $ gcc fig10_03.c -o fig10_03 -std=c11
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "color.h"

#define CARDS 52
#define FACES 13

// card structure definition
struct card {
    const char *face; // define pointer face
    const char *suit; // define ponter suit
};

// new type name for struct card
typedef struct card Card;

// prototypes
void fillDeck(Card * const wDeck,
    const char * wFace[],
    const char * wSuit[]);
void shuffle(Card * const wDeck);
void deal(const Card * const wDeck);

int main(void)
{
    Card deck[CARDS]; // define array of Cards

    // initialize array of pointers
    const char *face[] = {
        "Ace", "Deuce", "Three", "Four", "Five",
        "Six", "Seven", "Eight", "Nine", "Ten",
        "Jack", "Queen", "King"
    };

    // initialize array of pointers
    const char *suit[] = {
        "Clubs", "Diamonds", "Hearts", "Spades"
    };

    // randomize
    srand(time(NULL));

    fillDeck(deck, face, suit); // load the deck with Cards
    shuffle(deck); // put Cards in random order
    deal(deck); // deal all 52 Cards
}

// place strings into Card structures
void fillDeck(Card * const wDeck,
    const char * wFace[],
    const char * wSuit[])
{
    // loop through wDeck
    for (size_t i = 0; i < CARDS; ++i) {
        wDeck[i].face = wFace[i % FACES];
        wDeck[i].suit = wSuit[i / FACES];
    }
}

// shuffle cards
void shuffle(Card * const wDeck)
{
    // loop through wDeck randomly swapping Cards
    for (size_t i = 0; i < CARDS; ++i) {
        size_t j = rand() % CARDS;
        Card temp = wDeck[i];
        wDeck[i] = wDeck[j];
        wDeck[j] = temp;
    }
}

// deal cards
void deal(const Card * const wDeck)
{
    // loop through wDeck
    for (size_t i = 0; i < CARDS; ++i) {
        if (memcmp(wDeck[i].suit, "Hearts", 6) == 0
            || memcmp(wDeck[i].suit, "Diamonds", 7) == 0)
            textcolor(COLOR_RED, COLOR_WHITE);
        else
            textcolor(COLOR_BLACK, COLOR_WHITE);
        printf("%7s of %-9s", wDeck[i].face, wDeck[i].suit);
        resetcolor();
        printf("%s", (i + 1) % 4 ? " " : "\n\n");
    }
}
