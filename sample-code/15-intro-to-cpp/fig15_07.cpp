/*
 * Uninitialized reference is a syntax error
 * $ g++ fig15_07.cpp -o fig15_07
*/
#include <iostream>
using namespace std;

int main()
{
    int count = 3;
    int &cnt; // Error: cnt must be initialized

    cout << "count = " << count << endl
         << "cnt = " << cnt << endl;
}

// error: 'cnt' declared as reference but not initialized
