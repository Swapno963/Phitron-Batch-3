#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    for(int i=0; i<n; i++){
        int a; string s;
        cin >> a >> s;
        
        for(int j=0; j<a; j++){ // + or -
            if(s[j] == 'D') // +
            {
                if(ar[i] == 9){
                    ar[i] = 0;
                }
                else 
                    ar[i]++;
            }
            else{ // for U -
                if(ar[i] == 0)
                    ar[i] = 9;
                else
                    ar[i]--;
            }
        }
    }

    for(int i=0; i<n; i++)
        cout << ar[i] << " ";
    cout << endl;
}
int main()
{
    int t; cin >> t;
    while(t--)
        solve();
    return 0;
}