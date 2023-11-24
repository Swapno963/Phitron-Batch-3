#include<bits/stdc++.h>
using namespace std;
void toBinary(int x){
    if(x == 0) return;
    toBinary(x/2);
    cout << x % 2;
}
int main()
{
    int n; cin >> n;
    while(n--){
        int x; cin >> x;
        toBinary(x);
        cout << endl;
    }
    return 0;
}