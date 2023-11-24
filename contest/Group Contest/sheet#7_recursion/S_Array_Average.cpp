#include<bits/stdc++.h>
using namespace std;
long long get_sum(int n, int ar[]){
    if(n == 0) return 0;
    return (long long) ar[n-1] + get_sum(n-1,ar);
}
int main()
{
    int n; cin >> n; 
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    double ave = get_sum(n,ar)/n;
    cout << fixed << setprecision(6);
    cout <<  ave << endl;
    return 0;
}