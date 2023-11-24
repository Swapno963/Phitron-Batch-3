#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    
    while(getline(cin ,s))
    {
        sort(s.begin() , s.end());
        for(auto a:s)
        {
            if(a != ' ')
            {
            cout << a ;

            }
        }
        cout << endl;

        //cout << s <<endl;
    }
    return 0;
}