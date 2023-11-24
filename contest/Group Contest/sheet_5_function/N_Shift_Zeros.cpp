#include<bits/stdc++.h>
using namespace std;
void work_with_zero(int n, int ar[]){
    int arr[n];
    int arr_ind = 0;
    for(int i=0; i<n; i++)
        arr[i] = 0;

    for(int i=0; i<n; i++)
    {
        if(ar[i] != 0){ 
            arr[arr_ind] = ar[i];
            arr_ind++;
        }
    }
    

    // just print it
    for(int i=0; i<n-1;i++){
        cout << arr[i] << " ";
    }
    cout << arr[n-1];
}

int main()
{
    int n; cin >> n;
    int ar[n];
    for(int i=0; i<n; i++)
        cin >> ar[i];

    
    work_with_zero(n,ar);
    
    return 0;
}