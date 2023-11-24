#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s; cin >> s;
    int count = 0;
    for(int i=0; i<s.length() -4; i++)
    {
        char lw1 = tolower(s[i]);
        char lw2 = tolower(s[i+1]);
        char lw3 = tolower(s[i+2]);
        char lw4 = tolower(s[i+3]);
        char lw5 = tolower(s[i+4]);

        if(lw1 =='e' && lw2 == 'g' && lw3 =='y' && lw4 =='p' && lw5 =='t') count++;
        
    }
    cout << count << endl;
    return 0;
}