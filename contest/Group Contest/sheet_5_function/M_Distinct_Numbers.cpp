#include<bits/stdc++.h>
using namespace std;
void distinct(int n, int ar[])
{
    int we_have = 0;
    int arr[1000];
    
    for(int i=0; i<=1000; i++)
        arr[i] = 0;

    for(int i=0; i<n; i++)
        arr[ar[i]]++;

    for(auto a:arr){
        if(a != 0)
            we_have++;
    }

    cout<< we_have << endl;

}
int main()
{
    int n; cin >>n;
    int ar[n];

    for(int i=0; i<n; i++)
        cin >> ar[i];

    distinct(n,ar);
    return 0;
}