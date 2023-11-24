#include<bits/stdc++.h>
using namespace std;
void even_indices(int n, int ar[]){
    if(n == 1) return;
    if(n%2 == 0) cout << ar[n] << " ";
    even_indices(n-1,ar);
 }

 void op_even_indices(int n, int s,int ar[]){
    if(n > s-1) return;
    op_even_indices(n+2,s,ar);
    if(n%2 == 0) cout << ar[n] << " ";
 }
int main()
{
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    // even_indices(n-1,ar);
    op_even_indices(0,n,ar);
    // cout << ar[0];
    return 0;
}