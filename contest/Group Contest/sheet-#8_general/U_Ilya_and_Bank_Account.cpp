#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num; 
    cin >> num;
    if(num >0)
        cout << num;
    else{

        long long num1 = num %10;
        long long tem = num/10;
        num= num/10;
        long long num2 = num %10;
        if(num1 <num2) // num1 smaller
            cout << tem << endl;
        else // num2 smaller
            cout << num1 << endl; 
        // cout << num1 << " " << num2 << endl;
    }

    return 0;
}