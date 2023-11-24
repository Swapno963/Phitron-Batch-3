#include<bits/stdc++.h>
using namespace std;
void concate(int n,int ar1[], int ar2[]){
    int ar[n+n];
    for(int i=0; i<n; i++){
        ar[i] = ar2[i];
    }  
    for(int i=n; i<n+n; i++){
        ar[i] = ar1[i-n];
    }

    // print our arr
     for(int i=0; i<n+n-1; i++){
         cout << ar[i] << " ";
    }
    cout << ar[n+n-1];
 }
int main()
{
    int n; cin >> n; 
    int ar1[n], ar2[n];
    
    for(int i=0; i<n; i++)
        cin >> ar1[i];

    for(int i=0; i<n; i++)
        cin >> ar2[i];

    concate(n,ar1,ar2);
    
    
        
    return 0;
}