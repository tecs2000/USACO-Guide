#include <bits/stdc++.h>

using namespace std;

#define ll long long

const ll MOD = 1e9 + 7;

/**
 * Implementing exponentiating by squaring recursively
 */
ll power(ll base, ll exp){
    if(exp == 0) return 1;

    ll temp = power(base, exp / 2) % MOD; // 2^6 = 2^3 * 2^3
    ll result = (temp * temp) % MOD;

    /**
     * When the exp is odd, the integer division rounds it down.
     * e.g., 5 div by 2 = 2. So, when dividing an odd exp,
     * we need one extra multiplication by the base to correct it.
     * 
     * 2^5 = power(2, 2) * power(2, 2) = 2^4 != 2^5
     * 
     * This way,
     * 
     * 2^5 = power(2, 2) * power(2, 2) * 2^1
     */
    if (exp % 2 == 1) result = (result * base) % MOD;
    return result;
}

int main() {
    int n;
    cin >> n;

    cout << power(2, n) << endl;

    return 0;
}
