#include<bits/stdc++.h>
using namespace std;
int main()
{
    int days; cin >> days;
   
        cout << days /365 << " years" << endl;
        days  = days-(365*(days/365));
   
        cout << days / 30 << " months\n";
        days -= (30*(days/30));
        
        cout << days << " days\n";
    

    
    //cout << days ;
    return 0;
}