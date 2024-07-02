#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int k = 1; k <= n; ++k) {
        // Total ways to place two knights on a k x k board
        long long k_square = static_cast<long long>(k) * k;
        long long total_ways = k_square * (k_square - 1) / 2;

        // Ways in which knights can attack each other
        long long attack_ways = 4 * (k - 1) * (k - 2);

        // Non-attacking placements
        long long non_attacking_ways = total_ways - attack_ways;

        cout << non_attacking_ways << endl;
    }

    return 0;
}
