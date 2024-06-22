#include <bits/stdc++.h>

using namespace std;

#define ll long long

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    ll moves = 0;

    ll *arr = (ll *)calloc(n, sizeof(ll));
    cin >> arr[0];

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
        if (arr[i] < arr[i - 1])
        {
            ll diff = arr[i - 1] - arr[i];
            moves += diff;
            arr[i] += diff;
        }
    }

    cout << moves;
    return 0;
}