#include<bits/stdc++.h>
using namespace std;
 void solve() {
    string s; cin >> s;
    int n = s.size();
    int i = 0, j = n - 1;
    while(i <= j) {
        if(s[i] == '?') {
            if(s[j] == '?') {
                s[i] = s[j] = 'a';
            } else {
                s[i] = s[j];
            }
        } else if(s[j] == '?') {
            if(s[i] == '?') {
                s[i] = s[j] = 'a';
            } else {
                s[j] = s[i];
            }
        } else if(s[i] != s[j]) {
            cout <<-1;
            return;
        }
        i++, j--;
    }
    cout << s;
}
int main()
{
solve();
}