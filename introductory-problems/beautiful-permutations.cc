#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0);
    ios::sync_with_stdio(0);

    int n;
    cin >> n;

    if (n == 1)
        cout << "1";

    else
    {
        if (n % 2 == 0)
        {
            if ((n - 1) > 1)
            {
                for (int i = 2; i <= n; i += 2) // prints all even numbers
                    cout << i << " ";

                for (int i = 1; i <= n; i += 2) // prints all odd numbers
                    cout << i << " ";
            }
            else
            {
                cout << "NO SOLUTION";
            }
        }
        else
        {
            if ((n - 2) > 1)
            {
                for (int i = 1; i <= n; i += 2)
                    cout << i << " ";

                for (int i = 2; i <= n; i += 2)
                    cout << i << " ";
            }
            else
            {
                cout << "NO SOLUTION";
            }
        }
    }

    return 0;
}