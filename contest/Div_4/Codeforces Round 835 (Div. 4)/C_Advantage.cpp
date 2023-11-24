#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int n; cin >> n;
        int ar[n];
        int mx= INT_MIN;
        int mx_ind = -1;
        for(int i=0; i<n; i++){
            cin >> ar[i];
            if(ar[i] > mx){
                mx = ar[i];
                mx_ind = i;}
        }
        // finding second max
        int mx2 = INT_MIN;
         for(int i=0; i<n; i++){
           if(i != mx_ind){
                if(ar[i] > mx2)
                mx2 = ar[i];
           }
        }


        int ar2[n];
        for(int i=0; i<n; i++){
            if(i == mx_ind){
                ar2[i] = mx- mx2;
            }
            else ar2[i] = ar[i] - mx;
            
        }
        for(auto a:ar2) cout << a << " ";
        // cout << mx_ind << endl;
        cout << endl;
    }
    return 0;
}


/*

// better code 
  for (int num : arr) {
        if (num > max1) {
            max2 = max1; // Update the second maximum
            max1 = num; // Update the first maximum
        } else if (num > max2) {
            max2 = num; // Update the second maximum
        }
    } 


*/