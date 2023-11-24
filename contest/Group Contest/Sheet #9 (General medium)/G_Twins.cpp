#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x,sum1 = 0,sum2=0; cin >> n;
    vector<int> v;
    int m = n;
    while(n--){
        cin >> x; v.push_back(x);
        sum1 += x;
    }
    sort(v.begin(),v.end());
    reverse(v.begin(),v.end());
    int count=0;
    for(int i=0; i<m/2; i++)
    {
        sum2 += v[i];
        count++;
    }

    if( sum1-sum2 >= sum2){
        count++;
    }
    cout << count << endl ;
    return 0;
}