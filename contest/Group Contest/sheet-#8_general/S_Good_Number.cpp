#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, k,count=0; cin >> n >> k;
    int ar[k+1];
   

    while(n--){
        for(int i=0; i<=k; i++)
            ar[i] = 0;

        string s; cin >> s;
        for(int i=0;i<s.size(); i++){
            ar[s[i]-'0'] = 1;
            // cout << s[i] -'0' << " ";
        }
        bool flag = true;
        for(int i=0; i<=k; i++)
        {
            if(ar[i] != 1) flag = false;
        }
        if(flag) count++;
    }
    cout << count << endl;


    return 0;
}