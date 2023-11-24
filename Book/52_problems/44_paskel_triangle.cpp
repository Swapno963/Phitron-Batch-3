#include<bits/stdc++.h>
using namespace std;
int main()
{
    int odd[21],even[21];
    int i, j,n;
    cin >> n;
    even[0] = 1; even[1] = 1;

    for(i=1; i<=n; i++){
        if(i%2!=0){ // even
            even[0] = 1;
            for(j =1; j< i-1; j++){
                even[j] = odd[j-1] + odd[j];
            }
            even[j] =1;
            for(int j=1; j<i-1; j++)
                cout << even[i];
            cout << endl;
        }
        else{
            odd[0] = 1;
            for(j=1; j<i-1; j++){
                odd[j] = even[j-1]+ even[j];
            }
            odd[j] = 1;

            for(int j=1; j<i-1; j++)
                cout << even[i];
            cout << endl;
        }
      
    }
    return 0;
}