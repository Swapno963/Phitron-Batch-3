#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int count = 0;
        int cur = 1;
        string s; cin >>s;
        for(int i=0; i<4; i++)
        {
        //    cout << s[i]-'0' << " ";
           int sm = s[i]-'0';
           if(sm == 0) sm = 10;

           if(sm == cur) count++;
           else{
            count += abs(cur-sm)+1;
            cur = sm;
           }
        //    cout << count << " ";
        }
         cout << count << endl;;
    }
    return 0;
}