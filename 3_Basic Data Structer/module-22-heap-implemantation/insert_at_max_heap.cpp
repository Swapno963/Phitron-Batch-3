#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    cin >> n; // how many value we have

    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x); // to make coplete binary tree
        int cur_ind = v.size() - 1;
        while(cur_ind != 0)
        {
            int parent_ind = (cur_ind-1)/2;
            if(v[parent_ind] < v[cur_ind])
                swap(v[parent_ind],v[cur_ind]);
            else 
                break;
            cur_ind = parent_ind;
        }   
    }

    // let's see what we have
    for(int val : v) cout << val << " ";
    return 0;
}