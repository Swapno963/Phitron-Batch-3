#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t; 
    while(t--){
        int n; cin >>  n;
        string a,b; cin >> a >> b;

        int chef = 0;
        int chefi = 0;
        for(int i=0; i<n; i++){
            if(a[i] == b[i])
                continue;
            else if(a[i] == 'R' && b[i] == 'S')
                chef++;
            else if(a[i] == 'S' && b[i] == 'R')
                chefi++;
            else if(a[i] == 'S' && b[i] == 'P')
                chef++;
            else if(a[i] == 'P' && b[i] == 'S')
                chefi++;
            else if(a[i] == 'P' && b[i] == 'R')
                chef++;
            else chefi++;
        }
        if(chefi == chef)
            cout << chef <<endl;
        else if(chefi > chef)
            cout << chefi - chef << endl;
        else 
            cout << 0 << endl;
    }
    return 0;
}