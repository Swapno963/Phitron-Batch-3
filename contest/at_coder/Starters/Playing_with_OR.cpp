#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int ar[n];
        for (int i = 0; i < n; i++)
            cin >> ar[i];

        int odd_count = 0;
        int odd_count_current = 0;

        for (int i = 0; i < k; i++) {
            odd_count_current |= ar[i];
        }

        if (odd_count_current % 2 != 0)
            odd_count++;

        for (int i = k; i < n; i++) {
            odd_count_current |= ar[i];
            odd_count_current ^= ar[i - k];
            if (odd_count_current % 2 != 0)
                odd_count++;
        }

        cout << odd_count << endl;
    }
    return 0;
}
