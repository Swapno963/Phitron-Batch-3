#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;
    cin >> s1 >> s2;
    int st=0;
    int ed=0;
    int count  = 1;
    while(s1[st] != '\0' && s2[ed] != '\0')
    {
        if(s1[st] == s2[ed]){
            count++;
            st++;
            ed++;
        }
        else ed++;
        // cout << s1[st] << " ";
        // st++;
    }
    cout <<count << endl;
    return 0;
}