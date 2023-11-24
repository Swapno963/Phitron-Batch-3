#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    int ar[n];
    for(int i=0; i<n;i++)
        cin >> ar[i];

    long long sum1 = 0,sum2=0;
    int st=0;int ed = n-1;

    for(int i=0; i<n; i++){
        if(i%2 == 0){
             if(ar[st]>ar[ed]){ // st is bigger
            sum1+= ar[st];
            st++;
            }
            else{ // ed is bigger
            sum1+= ar[ed];
            ed--;
            }
        }
        else{
             if(ar[st]>ar[ed]){ // st is bigger
            sum2+= ar[st];
            st++;
            }
            else{ // ed is bigger
            sum2+= ar[ed];
            ed--;
            }
        }
       
    }
        cout << sum1 << " " << sum2 << endl;
    return 0;
}