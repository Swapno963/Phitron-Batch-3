#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int ar[4];
        for(int i=0;i<4; i++)
            cin >> ar[i];

        int count = 0;
        for(int i=1;i<4; i++)
            if(ar[0] < ar[i])
                count++;


        cout << count << endl;
    }
    return 0;
}