#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;

    while (n--)
    {
        ll x, y;
        cin >> x >> y;

        ll maxSide = max(x, y);
        ll maxVal = maxSide * maxSide;
        ll result;

        ll smallestNum = (maxSide - 1) * (maxSide - 1) + 1;
        if (maxSide % 2 == 0) // nessa camada, os numeros vao do maior pro menor
        {
            if (x == maxSide) // pego o maior numero, e subtraio o num de colunas
                result = maxVal - (y - 1);
            
            else // pego o menor numero, e somo o numero de linhas
                result = smallestNum + (x - 1);
        }
        else
        { // nessa camada os numeros vao do menor pro maior
            if (x == maxSide)
                result = smallestNum + (y - 1);
            
            else
                result = maxVal - (x - 1);
        }

        cout << result << endl;
    }

    return 0;
}
