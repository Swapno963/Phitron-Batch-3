#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long num; cin >> num;
    long long left = 1; 
    long long right = num;
    long long result = 0;
    while(left <= right){
        long long mid =  left + (right - left) / 2;
        long long sum = (mid*(mid+1))/2;
        if(sum <= num){
            result = mid;
            left ++;
        }
        else{
            right --;
        }
    }

    cout << result;
    return 0;
}