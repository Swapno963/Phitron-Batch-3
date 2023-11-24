#include<bits/stdc++.h>
using namespace std;
vector<int> return_ans(const vector<int>& arr, int k) {
    int l = 0;
    int r = 0;
    vector<int> temp_store;
    vector<int> final_ans;

    while (r < arr.size()) {
        if (arr[r] < 0) {
            temp_store.push_back(arr[r]);
        }

        if (r - l + 1 != k) {
            r++;
        } else if (r - l + 1 == k) {
            if (temp_store.empty()) {
                final_ans.push_back(0);
            } else {
                final_ans.push_back(temp_store[0]);
                if (arr[l] < 0) {
                    temp_store.erase(temp_store.begin());
                }
            }
            r++;
            l++;
        }
    }

    return final_ans;
}

int main() {
    vector<int> arr;
    int n,k; cin >> n >> k;

    for(int i=0; i<n; i++){
        int x; cin >> x;
        arr.push_back(x);
    }

    vector<int> result = return_ans(arr, k);

    for (int num : result) {
        cout << num << " ";
    }

    return 0;
}