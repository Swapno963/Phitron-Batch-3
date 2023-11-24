#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        string s,t; cin >> s >> t;
        int s_len = s.length();
        int t_len = t.length();

        int mn_len = min(s_len,t_len);
        int mx_len = max(s_len,t_len);

        string new_str = "";
        for(int i=0; i<mn_len; i++)
        {
            new_str+= s[i];
            new_str+= t[i];
        }

        for(int i=mn_len; i<mx_len; i++)
        {
            if(s_len > t_len)
            {
                new_str+= s[i];
            }
            else{
                new_str+= t[i];
            }
        }
        cout << new_str << endl;
    }
    return 0;
}