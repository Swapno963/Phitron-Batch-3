#include<bits/stdc++.h>
using namespace std;
void solve(){
    pair<int,int> pi;
    pair<int,int> pi2;
    char c;
    int x;

    cin >> pi.first >> c >>pi.second >> x;

    // storeing input
    pi2.first = pi.first;
    pi2.second = pi.second;

    //  hour and minuit
    int hour = x / 60;
    int minu = x % 60;

    while(true){
        // + hour and minuites
        if(pi.first + hour <= 23){
            pi.first += hour;
        }
        else{
            pi.first = (pi.first + hour) - 24;
        }

        if(pi.second + minu > 59){
            pi.first++;
            pi.second += (pi.second + minu) - 60; 
        }
        else    
            pi.second += minu;

        cout << pi.first << " " << pi.second << endl;

        if(pi.first == pi2.first && pi.second == pi2.second)
            break;
    }
    cout << endl << endl;
}
int main()
{
    int t; cin >> t;
    while(t--){
        solve();
    }
    return 0;
}