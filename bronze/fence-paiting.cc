#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int a, b;
    int c, d;

    cin >> a >> b >> c >> d;

    if (c >= b || a >= d) // there's no overlap
    {
        cout << (d - c) + (b - a) << endl;
    }
    else
    {
        int start = min(a, c);
        int end = max(b, d);
        cout << (end - start) << endl;
    }

    return 0;
}