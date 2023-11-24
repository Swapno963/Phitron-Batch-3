#include<bits/stdc++.h>
using namespace std;
int main()
{   
    int test_case;
    cin >> test_case;
    for(int i=0; i<test_case; i++)
    {
        string tem;
        cin >> tem;
        int sum1 = tem[0]+tem[1]+tem[2] ;
        cout <<sum1 << endl;
    }
    return 0;
}