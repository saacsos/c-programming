/*
 * Simulating the game of craps.
 * Introducing enum
 * To compile:
 * $ gcc fig05_14.c -o fig05_14 -std=c11
 */

/*
    One of the most popular games of chance is a dice game known as "craps."
    which is played in casinos and back alleys throughout the world.
    The rules of the game are straightforward:
            "A player rolls two dice. Each dice has six faces. These faces contain
        1, 2, 3, 4, 5, and 6 spots. After the dice have come to rest,
        the sum of the spots on the two upward faces is calculated.

        If the sum is 7 or 11 on the first throw, the player wins.
        If the sum is 2, 3, or 12 on the first throw (called 'craps'),
        the player lost.
        If the sum is 4, 5, 6, 8, 9, or 10 on the first throw,
        then that sum becomes the player's 'point.'
        To win, you must continue rolling the dice until you 'make your point.'
        The player loses by rolling a 7 before making the point."
 */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// enumeration constants represent game status
enum Status { CONTINUE, WON, LOST };

int rollDice(void); // function prototype

int main(void)
{
    // randomize random number generator using current time
    srand(time(NULL));

    int myPoint; // player must make this point to win
    enum Status gameStatus; // can contain CONTINUE, WIN, or LOST
    int sum = rollDice(); // first roll of the dice

    // determine game status based on sum of dice
    switch (sum) {
        // win on first roll
        case 7: // 7 is a winner
        case 11: // 11 is a winner
            gameStatus = WON;
            break;

        // lose on first roll
        case 2:  // 2 is a loser
        case 3:  // 3 is a loser
        case 12: // 12 is a loser
            gameStatus = LOST;
            break;

        // remember point
        default:
            gameStatus = CONTINUE; // player should keep rolling
            myPoint = sum;
            printf("Point is %d\n", myPoint);
            break; // optional
    }

    // while game not complete
    while (CONTINUE == gameStatus) { // player should keep rolling
        sum = rollDice(); // roll dice again;

        // determine game status
        if (sum == myPoint) { // win by making point
            gameStatus = WON;
        } else {
            if (7 == sum) { // lose by rolling 7
                gameStatus = LOST;
            }
        }
    }

    // display won or lost message
    if (WON == gameStatus) { // did player win?
        puts("Player wins");
    } else { // Player lost
        puts("Player loses");
    }
}

// roll dice, calculate sum and display results
int rollDice(void)
{
    int dice1 = 1 + rand() % 6; // pick random dice1 value
    int dice2 = 1 + rand() % 6; // pick random dice2 value

    // display results on this roll
    printf("Player rolled %d + %d = %d\n", dice1, dice2, dice1 + dice2);
    return dice1 + dice2; // return sum of die
}
