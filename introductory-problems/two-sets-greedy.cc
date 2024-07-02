#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main() {
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin >> n;

    ll sum = (ll)n * (n + 1) / 2;
    
    // If the total sum is odd, it's impossible to split into two equal subsets
    if (sum % 2 != 0) {
        cout << "NO" << endl;
        return 0;
    }
    
    cout << "YES" << endl;
    ll target = sum / 2;

    vector<int> set1, set2;
    for (int i = n; i > 0; i--) {
        if (target >= i) { // Check if we can add i to set1 without exceeding target
            set1.push_back(i);
            target -= i; // Update the target
        } else {
            set2.push_back(i); // Otherwise, add i to set2
        }
    }

    // Print the first set
    cout << set1.size() << endl;
    for (int num : set1) {
        cout << num << " ";
    }
    cout << endl;
    
    // Print the second set
    cout << set2.size() << endl;
    for (int num : set2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
