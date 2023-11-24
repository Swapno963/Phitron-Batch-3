#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; 
    cin >>q;
    while(q--)
    {
        int n,m; 
        cin >> n >> m;
        vector<string> carpet(n);
        for(int i=0; i<n; ++i)
            cin >> carpet[i];

        string vika = "vika";
        int find = 0;
        for(int i=0; i<m; ++i)
        {
            bool check = false;
            for(int j=0; j<n; ++j)
            {
                if(carpet[j][i] == vika[find])
                    check = true;    
            }
            if(check) 
            {
                ++find;
                if(find == 4)
                    break;
            }
        }  


        if(find == 4)
            cout << "YES\n";
        else cout << "NO\n";           
    }
    return 0;
}