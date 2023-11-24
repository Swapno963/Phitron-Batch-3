#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    string tc1 = "010";
    string tc2 = "101";
    while(t--)
    {
        string a; cin >> a;
        bool flag = false;
        for(int i=0; i<a.length()-2; i++){
            if(a[i] ==tc1[i] && a[i+1] ==tc1[i+1] && a[i+2] == tc1[i+2])
            {    
                flag = true;
                break;
            }

            if(a[i] ==tc2[i] && a[i+1] ==tc2[i+1] && a[i+2] == tc2[i+2])
            {    
                flag = true;
                break;
            }
            
        }

       if(flag) cout << "Good" << endl;
       else cout << "Bad" << endl;
    }
    return 0;
}