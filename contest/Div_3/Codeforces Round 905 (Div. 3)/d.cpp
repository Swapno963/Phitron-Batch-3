#include<bits/stdc++.h>
using namespace std;
void is_done(int n, int k, string s){
    vector<int> freq(26,0);
    for(char c : s)
        freq[c-'a']++;

    int odd_count = 0;
    for(int f:freq)
        if(f%2!=0)
            odd_count++;
    int min_c = (n%2 == 0)? 0 : 1;
    int rc = max(0,(odd_count-1)/2);
    if(k>=min_c && k >= rc) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    int t; cin >> t;
    while(t--){
        int n,k; cin  >> n >>k;
        string s; cin >> s;
        is_done(n,k,s);
    }
    return 0;
}