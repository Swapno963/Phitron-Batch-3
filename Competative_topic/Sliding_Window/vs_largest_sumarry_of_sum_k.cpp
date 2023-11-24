#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k; cin >> n >> k;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];



    // algo starts
    int i=0; int j=0;
    long long sum = 0;
    int mx_size = 0;

    while(j < n){
        sum += ar[j];

        if(sum < k)
            j++;
        else if(sum == k){
            int sz = (j-i) + 1;
            mx_size = max(mx_size,sz);
            // if(sz > mx_size)
            //     mx_size = sz;
            j++;
        }
        else if(sum > k)
        {
            while(sum > k){
                sum -=ar[i];
                i++;
            }
            j++;
        }
    // cout << sum << "-" << i << " " << j << endl;
    }    

    cout << mx_size << endl;
    return 0;
}