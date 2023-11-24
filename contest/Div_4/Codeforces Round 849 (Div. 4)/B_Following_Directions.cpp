#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    cin.ignore();
    int x = 0; int y = 0;
    bool is_goen = false;
    while(n--){
        char a; cin >> a;
      
       
            if(a == 'U')
                y+=1;
            else if(a == 'D')
                y -=1;
            else if (a == 'L')
                x -= 1;
            else x+=1;

        
          if(x == 1 && y ==1) {
            is_goen = true;
        }
    }
    if(is_goen) cout << "YES\n";
    else cout << "NO\n";
}
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}