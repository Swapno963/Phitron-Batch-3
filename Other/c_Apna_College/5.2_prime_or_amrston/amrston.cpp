#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n; cin >>n;
    int orginal = n;
    int sum = 0;

    while(n>0)
    {
        int lastDegit = n%10;
        sum += pow(lastDegit,3);
        n /= 10;

    }

    // is amrston or not
    if(orginal == sum)
    {
        cout <<"Yes" << endl;
    }
    else
    {
        cout <<"No"<<sum <<endl;
    }



    return 0;
}