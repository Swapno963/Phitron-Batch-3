#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    int nums[n];

    for(int i=0; i<n; i++)
    {
        cin >> nums[i];
    }

    int ind_f; cin >> ind_f;


    // for(auto i:nums) cout << i << " ";
    // cout << endl;
    int first = 0; int last = n-1;

    while(true)
    {
        int mid =(first + last)/2;
        // cout <<mid <<" "<< nums[mid] <<endl;

        if(nums[mid] < ind_f)
        {
            first = mid+1;
        }
        if(nums[mid] > ind_f)
        {
            last = mid-1;
        }
        if(nums[mid] == ind_f) 
        {
            cout << mid;
            break;
        }
        if(first == last) 
        {
            cout << "not found";
            break;
        }

    }
    return 0;
}