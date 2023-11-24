#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n = 6;
    int num[n] = {5,8,6,1,7,9};

    for(int i=1; i<=n; i++){
        for(int j=1; j<n; j++){
            if(num[j+1] > num[j]){
                int tem =num[j];
                num[j] = num[j+1];
                num[j+1] = tem; 
            }
        }
    }
    return 0;
}