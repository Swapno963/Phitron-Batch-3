#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case; cin >> test_case;

    while(test_case--)
    {
        int n; cin >> n;
        int arr[n];
        bool flag = true;
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }

        // checking
        for(int i=0; i<n-1; i++)
        {
            if(arr[i] > arr[i+1])
            {
                flag = false;
            }
        }
        
        if(flag) cout <<"YES\n";
        else cout <<"NO\n";
    }
    return 0;
}