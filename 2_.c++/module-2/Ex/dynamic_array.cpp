#include<bits/stdc++.h>
using namespace std;
int main()
{
    // creating dynamic array
    int *arr = new int[5];

    // taking input
    for(int i=0; i<5; i++)
    {
        cin >>arr[i];
    }

       // Giving output
    for(int i=0; i<5; i++)
    {
        cout <<arr[i] <<" ";
    }

    // delet arr
    delete[] arr;
    return 0;
}