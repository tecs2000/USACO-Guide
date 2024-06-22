#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;

    cout << "Enter a number ranging from 1 to 100: " << endl;
    cin >> n;

    cout << "Starting the game with n = " << n << endl;

    int guess = 0;
    int floor = 1;
    int ceil = 101;

    int attempts = 0;

    while (guess != n)
    {
        guess = floor + (rand() % (ceil - floor));
        cout << "Attempt " << ++attempts << " guessed " << guess << endl;

        if (guess > n) // n está entre 0 .. guess
            ceil = guess;

        else if (guess < n) // n está entre floor + 1 ... ceil
            floor = guess + 1;
    }
    cout << "After " << attempts << " tries found n = " << guess;
    return 0;
}