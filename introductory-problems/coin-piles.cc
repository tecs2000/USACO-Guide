#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        ll x, y;
        cin >> x >> y;

        ll greater = max(x, y);
        ll smaller = min(x, y);

        if (smaller < greater / 2)
        {
            cout << "NO" << endl;
            continue;
        }

        int sum = ((x % 3) + (y % 3)) % 3;
        if (sum == 0)
            cout << "YES" << endl;

        else
            cout << "NO" << endl;
    }

    return 0;
}