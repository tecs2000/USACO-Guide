#include <bits/stdc++.h>

using namespace std;

int maxSeq = 1;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin >> s;

    int curr = 1; // a char by itself is a seq of len 1
    char prev = s[0];

    for (int i = 1; i < s.length(); i++)
    {
        if (s[i] == prev)
            curr++;
        else
        {
            if (curr > maxSeq)
                maxSeq = curr;
            curr = 1;
        }

        prev = s[i];
    }

    if (curr > maxSeq)
        maxSeq = curr;

    cout << maxSeq;

    return 0;
}