#include<bits/stdc++.h>
using namespace std;
string s;
void str(int a)
{
    string key,value;
    bool is_key = true;
    for(int i=a; i<=s.length(); i++)
    {
        if(s[i] == '='){ 
            is_key = false;
            cout << key << ": ";
            key = "";
            i++;
            }
        if(s[i] == '&' ){
            is_key = true;
            cout << value << endl;
            value = "";
            i++;
        }   
        if(is_key) key += s[i];
        else value += s[i];
    }
}
int main()
{
     getline(cin, s);
     s +='&';
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '?')
        {
            str(i+1);
            break;
        }
        
    }
    return 0;
}