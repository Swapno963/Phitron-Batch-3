#include<bits/stdc++.h>
using namespace std;

const int A = 1000;
 
int ii[A + 1];
 
int gcd(int a, int b) {
	return b == 0 ? a : gcd(b, a % b);
}
 
int main()
{
    int t; cin >> t;
	while (t--) {
		int n; cin >> n;
		for (int a = 1; a <= A; a++)
			ii[a] = 0;
		for (int i = 1; i <= n; i++) {
			int a; cin >> a;
			ii[a] = i;
		}
		int ans = -1;
		for (int a = 1; a <= A; a++)
			for (int b = a; b <= A; b++)
				if (ii[a] && ii[b] && gcd(a, b) == 1)
					ans = max(ans, ii[a] + ii[b]);
		cout << ans << '\n';
	}
	
    return 0;
}