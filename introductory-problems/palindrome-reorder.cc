#include <bits/stdc++.h>

using namespace std;

int main()
{
    char c;
    long long total = 0;
    map<char, int> freq;

    while (cin >> c)
    {
        if (auto search = freq.find(c); search != freq.end())
            freq[c] += 1;
        else
            freq[c] = 1;

        ++total;
    }

    string firstHalf = "";
    string middle = "";
    string secondHalf = "";

    int howManyOdds = 0;

    for (auto tuple = freq.begin(); tuple != freq.end(); ++tuple)
    {
        if (tuple->second % 2 == 1)
        {
            ++howManyOdds;
            middle = string(tuple->second, tuple->first);

            if (howManyOdds > 1)
            {
                cout << "NO SOLUTION\n";
                return 0;
            }
        }
        else
            firstHalf += string(tuple->second / 2, tuple->first);
    }

    secondHalf = firstHalf;
    reverse(secondHalf.begin(), secondHalf.end());

    cout << firstHalf + middle + secondHalf << endl;

    return 0;
}