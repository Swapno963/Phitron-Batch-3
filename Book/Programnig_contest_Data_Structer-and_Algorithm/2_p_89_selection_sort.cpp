#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int num[n] = {5,8,6,1,7,9};

    for(int i=1; i<=n; i++){
        for(int j=i+1; j<=n; j++){
            if(num[i] > num[j])
                swap(num[i],num[j]); 
        }
    }
    return 0;
}