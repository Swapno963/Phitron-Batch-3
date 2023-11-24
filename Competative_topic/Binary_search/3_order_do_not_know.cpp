#include<bits/stdc++.h>
using namespace std;
int main()
{
    //we don't know the size of arry and the way it sorted
    //int ar[5] = {1,2,3,4,5};
    int ar[5] = {5,4,3,2,1};


    int sr = 4;
    int start = 0; 
    int end = sizeof(ar)/sizeof(ar[0]);
    
    string tp;
    if(end >1)
    {
        if(ar[0] > ar[1]) tp = "dec";
        else tp = "ace";
    }

    while(start <= end)
    {
        int mid = start + (end - start)/2;
        if(ar[mid] == sr){
             cout << mid ;
             break;
        }
        else if(tp == "ace" && ar[mid] < sr)
            start = mid + 1;
        else if(tp == "ace" && ar[mid] > sr)
            end = mid-1;
        else if(tp=="dec" && ar[mid] < sr)
            end = mid -1;
        else if(tp == "dec" && ar[mid] >sr)
            start = mid + 1;
    }
    return 0;
}