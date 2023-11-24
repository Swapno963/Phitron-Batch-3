#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; 
    cin >> n;
    long long int arr[n];

    // taking input 
    for(int i =0; i<n; i++)
    {
        cin >> arr[i];
    }
    
    int first =0; int last = n-1; int is_p = 1;
    while(first<last)
    {
        if(arr[first] != arr[last])
        {
            is_p = 0;
        }

        first++;last--;
    }
    (is_p==1) ?cout << "YES" : cout <<"NO";
    
    return 0;
}