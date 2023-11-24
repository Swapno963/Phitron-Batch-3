#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        // taking input
        int n; cin >> n;
        string ar;
        cin >>ar;


        int ans = 0;
        for(int i=0; i<n-2; i++)
        { //cout << ar[i] << " "<< ar[i+1]<<endl;
            if(ar[i+2] == '1') // need to make 1
            {
                if(ar[i] != '0' || ar[i+1] != '0' ) // or operation
                     ans++;
                else if(ar[i] == '1' || ar[i+1] == '1') // and
                    ans++;

            }
            else // need to make 0
            {
                if(ar[i] == '1' && ar[i+1] == '1') // and
                    ans++;
                else if(ar[i] == '1' && ar[i+1] == '1') // and
                    ans++;
                else if(ar[i] == '0' && ar[i+1] == '0') // and
                    ans++;

            }
        }
        cout << ans << endl;
    }
    return 0;
}