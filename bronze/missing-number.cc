#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> arr(n + 1, 0);

    int d;
    for (int i = 0; i < n - 1; i++)
    {
        cin >> d;
        arr[d] = 1;
    }

    for (int i = 1; i <= n; i++)
    {
        if (arr[i] == 0)
        {
            cout << i << endl;
            break;
        }
    }

    return 0;
}