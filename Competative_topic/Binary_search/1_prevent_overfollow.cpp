#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[7] = {1,2,3,4,5,6,7};
    int start = 0; 
    int end = 6;

    int sr = 4;
    while(start <= end)
    {
        int mid = start + (end - start) /2 ;
        if(ar[mid] == sr) 
        {
            cout << mid;
            break;
        }
        else if(ar[mid] > sr)
        {
            end = mid-1;
        }
        else{
            start = mid +1;
        }
    }
    return 0;
}