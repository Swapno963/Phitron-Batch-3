#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    int l_len = s.length();
    if(l_len <=4)
        cout << s;
    else{
        for(int i=0; i<=l_len-4; i++)
            if(s[i] =='E' && s[i+1]=='G'&& s[i+2]=='Y'&& s[i+3]=='P'&&s[i+4]=='T')
                cout << " ";
            else cout << s[i];
    }
    return 0;
}