#include<bits/stdc++.h>
using namespace std;
// inserting element in heap one by one
void insert_heap(vector<int> &v, int x)
{
    v.push_back(x);
    int cur_idx = v.size() -1;
    while(cur_idx != 0)
    {
        int parent_idx = (cur_idx-1)/2;
        if(v[parent_idx] > v[cur_idx])
            swap(v[parent_idx], v[cur_idx]);
        else
            break;
        cur_idx = parent_idx;
    }
}

// delete root or max value then sort which take log(n) for n element it takes nlog(n)
void delete_heap(vector<int> &v)
{
    v[0] = v[v.size()-1];
    v.pop_back();
    int cur =0;
    while(true)
    {
        int left_idx = cur *2 +1;
        int right_idx = cur *2 +2;
        int last_idx = v.size() - 1;


        if(left_idx <= last_idx && right_idx <= last_idx) // if both left and right elemenet are present
        {
            if(v[left_idx] <= v[right_idx] && v[left_idx] < v[cur]) // 1. between left and right, is left is bigger and equal too right and biger then current 
            {
                swap(v[left_idx], v[cur]);
                cur = left_idx;
            }
            else if(v[right_idx] <= v[left_idx] && v[right_idx] < v[cur])
            {
                swap(v[right_idx], v[cur]);
                cur = right_idx;
            }
            else
            {
                break;
            }

        }
        // if only left is present
        else if(left_idx <= last_idx)
            {
                if(v[left_idx] < v[cur])
                {
                    swap(v[left_idx], v[cur]);
                    cur = left_idx;
                }
                else break;
            }
        // if only right is present
        else if(right_idx <= last_idx)
            {
                if(v[right_idx] < v[cur])
                {
                    swap(v[right_idx], v[cur]);
                    cur = right_idx;
                }
                else break;
            }
        else break;
    }
}

// preing all the element
void print_heap(vector<int> v)
{
    for(int val : v) cout << val << " " ;
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for(int i=0; i<n; i++)
    {
        int x;
        cin >> x;
        insert_heap(v, x);
    }
    delete_heap(v);

    print_heap(v);
    delete_heap(v);
    print_heap(v);
    return 0;
}