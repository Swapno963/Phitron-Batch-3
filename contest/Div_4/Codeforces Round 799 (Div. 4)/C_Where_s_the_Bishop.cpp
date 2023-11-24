#include<bits/stdc++.h>
using namespace std;
void solve(){
    char c[8][8];
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            char ch; cin >> ch;
            c[i][j] = ch;
        }
    }

    for(int i=1; i<7; i++){
        for(int j=1; j<7; j++){
            if(c[i][j] == '#' && c[i-1][j-1] == '#'&& c[i-1][j+1] == '#' && c[i+1][j+1] == '#'&& c[i+1][j-1] == '#'){
                cout << i+1 << " " << j+1 << endl;
                break;
            }
        }
    }
}
int main()
{
    int t; cin >> t;
    while (t--)
    {
      solve();
    }
    
    return 0;
}