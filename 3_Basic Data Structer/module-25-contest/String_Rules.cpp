#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[5090]; cin >> s;
    for(int i=0; i<strlen(s); i++)
    {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/')
        {
            //cout << s[i];
        }
        else
        {
            char c;
            if(s[i] >= 'a' && s[i] <= 'z'){
                // for char
                c = s[i];
                //cout << c;
            }
            else
            {
                
                //cout << s[i]-48;
                int a = atoi(s[i]);
                for(int i =0; i<atoi(s[i]); i++)
                {
                    cout << i << " ";
                }
                cout << endl;
            }
        }
       // cout << s[i] << " ";
    }
    //cout << s;
    return 0;
}