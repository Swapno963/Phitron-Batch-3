#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int ar[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            cin >> ar[i][j];
    }

    int sum1 = 0; int sum2 = 0;
     for(int i=0; i<n; i++)
    {
        sum2 += ar[i][n-1-i];
        for(int j=0; j<n; j++)
            if(i == j) sum1 += ar[i][j];

    }

    cout << abs(sum1-sum2) ;
    return 0;
}