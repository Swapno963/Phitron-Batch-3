#include<bits/stdc++.h>
using namespace std;
int main()
{
    int size; cin >> size;
    int ar[size];
    int num;
    for(int i=1; i<=size; i++){
        cin  >> num;
        ar[num] = i;
        
        }
    for(int i=1; i<=size; i++)
        cout  << ar[i] <<" ";
    return 0;
}