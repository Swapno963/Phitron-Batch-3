#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >>n;

    // reverse number
    int reverse =0; ;
    while(n>0)
    {
        int lastDegit = n%10;
        reverse = reverse*10 + lastDegit;
        n /= 10;

    }
    cout << "The number is : "<< reverse << endl;
    return 0;
}