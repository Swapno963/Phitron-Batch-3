#include<bits/stdc++.h>
using namespace std;

vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        
        vector<int> output;
        int i=0;
        int j=0;
        list<int> l;
        while(j<nums.size())
        {
            if(l.empty()){ 
                l.push_back(nums[j]);   
            }
            else
            {
                while(!l.empty() && l.back()<nums[j])
                    l.pop_back();

                l.push_back(nums[j]);               
            }
            if(j-i+1<k)
                ++j;
            else if(j-i+1==k)
            {
                output.push_back(l.front());
                if(nums[i]==l.front()) // if first one is the biggest among k elements
                    l.pop_front();

                ++i;
                ++j;
            }

            cout << "Result : \n";
            cout << "i :" << i << ", j :" << j << endl;
            cout << "l : ";
            for(auto a : l) cout << a << " ";
            cout << "\nOutput : ";
            for(auto a : output) cout << a << " ";
            cout << endl << endl;
        }
        return output;
        
    }
int main()
{
    vector<int> num;
    int n, k;  cin >> n >> k;
    for(int i=0; i<n; i++){
        int x; cin >> x;
        num.push_back(x);
    }

    vector<int> res = maxSlidingWindow(num,k);
    for(auto a : res) cout << a << " ";
    return 0;
}