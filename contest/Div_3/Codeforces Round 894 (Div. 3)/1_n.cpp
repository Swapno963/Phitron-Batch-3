#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--)
    {
        int n, m; cin >> n >>m;
        string nm = "vika";

        int pt1 = 0; int pt2 =0;
        for(int i=0; i<n; i++)
        {
            string tem; cin >> tem;
            //cout << "for " << tem << endl;
            for(int j=pt2; j<m; j++)
            {
                if( nm[pt1] == tem[j])
                {
                    if(pt1<=3) pt1++;
                    pt2++;
                    //cout << pt1 << " " << pt2<< endl;
                }

            }

            
        }
        cout <<pt1 << endl;
    }
    return 0;
}