#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int p = 0;
    int c = 0;
    while(n--){
        int x; cin >> x;
        if(x == -1 && p <= 0){
            c++;
        }
        else if(x == -1 && p >=0){
            p--;
        }
        else p+=x;
    }

    cout << c;
    return 0;
}