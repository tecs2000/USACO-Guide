#include <bits/stdc++.h>

#define endl '\n'

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    long long n;
    cin >> n;

    while (n != 1)
    {
        cout << n << " ";
        if (n % 2 == 0)
        {
            n = n / 2;
        }
        else
        {
            n = n * 3 + 1;
        }
    }
    cout << n << endl;
    return 0;
}