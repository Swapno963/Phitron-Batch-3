#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int num[n] = {5,8,6,1,7,9};

    for(int i=1; i<=n; i++){
        int x = num[i];
        int j = i - 1;
        while(j >= 1 && num[j] > x){
            num[j+1] = num[j];
            j--;
        }
        num[j+1] = x;
    }
    return 0;
}