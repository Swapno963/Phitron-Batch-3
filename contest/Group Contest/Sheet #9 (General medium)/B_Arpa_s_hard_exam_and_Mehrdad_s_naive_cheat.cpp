#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    Input
    The single line of input contains one integer n (0  ≤  n  ≤  109).

    Output
    Print single integer — the last digit of 1378n.
    */

    int num; cin >> num;
    int degit = 1378%10;
    // cout << degit << endl;
    int pows = pow(degit,num);
    cout << pows%10 << endl;
    return 0;
}