/*
 * Initializing and using a reference.
 * $ g++ fig15_06.cpp -o fig15_06
*/
#include <iostream>
using namespace std;

int main()
{
    int score = 3;
    int &scoreRef = score; // scoreRef refers to (is an alias for) score

    cout << "score = " << score << endl
         << "scoreRef = " << scoreRef << endl;

    scoreRef = 30; // actually modifies score
    cout << "score = " << score << endl
         << "scoreRef = " << scoreRef << endl;
}
