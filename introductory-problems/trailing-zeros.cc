#include <iostream>
using namespace std;

// Recursive function to calculate the multiples of 5 till N
int solve(int N)
{
    if (N < 5)
        return 0;
    
    return N / 5 + solve(N / 5);
}

int main()
{
    int N;
    cin >> N;

    int count = 0;

    // for (int i = 1; i <= N; i++)
    //     count += solve(i);

    cout << solve(N) << endl;
    return 0;
}