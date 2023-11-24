#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m; cin >> n >> m;
    bool flag = false;
    if(m %2 == 0) flag = true;
    for(int i=1; i<=n; i++){
        for(int j=1; j<=m; j++){
            if(i%2 != 0){ cout << "#";
                    flag = !flag;
            }
            else{
                if(flag &&j == m){ cout << "#"; }
                else if(!flag &&j == 1) {cout << "#";}
                else cout <<".";
            }
        }
        cout << endl;
    }
    return 0;
}