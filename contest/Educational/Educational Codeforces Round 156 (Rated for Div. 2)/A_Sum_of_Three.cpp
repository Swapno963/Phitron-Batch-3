#include<bits/stdc++.h>
using namespace std;
long long sum(vector<int> v){
    long long sum = 0;
    for(auto a : v) sum += a;
    return sum;
}
int main()
{
    int t; cin >> t;
    while(t--){
        int x; cin >> x;
        vector<int> v;
        if(x <= 4) cout << "NO\n";
        else if(x %3 !=0) cout << 1 << " " << 2 << " " << x -3 << endl;
        else{
            cout << 1 << " " << 7 << " " << x-8 << endl;
        }
    }
    return 0;
}