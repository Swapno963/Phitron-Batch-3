#include<bits/stdc++.h>
using namespace std;
int main()
{
    int ar[5] = {5,4,3,2,1};
    int start = 0; 
    int end = 4;
    
    int sr = 3;
    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(ar[mid] == sr) {
            cout << mid <<endl;
            break;
        }
        else if(ar[mid] > sr)
            start += mid;
        else end -= mid;

    }
    return 0;
}