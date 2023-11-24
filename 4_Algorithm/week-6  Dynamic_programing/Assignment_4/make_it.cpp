#include<bits/stdc++.h>
using namespace std;

bool knapsack(double n)
{
    // base case
    if(n == 1) return 1;

    if(n >= 1)
    {
        bool op1 = knapsack(n/2);
        bool op2 = knapsack(n-3);
        return op1 || op2;
    }
    else return false;
}
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n; cin >> n;
        //cout << knapsack(n) << endl;
        if(n == 1) cout << "YES" << endl;
        else
        {

            if(knapsack(n)) cout << "YES" << endl;
            else cout << "NO" << endl;
        }
    }
    return 0;
}