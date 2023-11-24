#include <bits/stdc++.h>
using namespace std;
const int N = (int) 1e6+5;
#define ll long long int
#define Faster ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
#define INF (ll)1e16
 
 
 
int main(){
   Faster;
   int t;                  cin>>t;
   while(t--){
      ll n;                cin>>n;
      vector<ll> a(n);
 
      for(int i=0;i<=n-2;i++){
         cin>>a[i];
      }
 
      ll total=(n*(n+1LL))/2LL;
 
      if(a[n-2]>total){
         cout<<"NO"<<endl;
         continue;
      }
 
      if(a[n-2]!=total){
         a[n-1]=total;
         vector<ll> arr;
         for(int i=n-2;i>=0;i--){
            arr.push_back(a[i+1]-a[i]);
         }
 
         arr.push_back(a[0]);
 
         bool ok=true;
         vector<bool> visited(n+1,false);
         for(int i=0;i<n;i++){
            if(arr[i]>n or visited[arr[i]]){
               ok=false;
               break;
            }
            visited[arr[i]]=true;
         }
 
         if(ok){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
 
 
 
         continue;
      }
 
      vector<bool> visited(n+1,false);
      vector<ll> sums;
      for(int i=0;i<=n-2;i++){
         if(i==0){
            sums.push_back(a[i]);
            if(a[i]<=n){
               visited[a[i]]=true;
            }
         }
         else{
            sums.push_back(a[i]-a[i-1]);
            if(a[i]-a[i-1]<=n){
               visited[a[i]-a[i-1]]=true;
            }
         }
      }
 
      vector<ll> missing;
      for(int i=1;i<=n;i++){
         if(!visited[i]){
            missing.push_back(i);
         }
      }
 
      if(missing.size()!=2){
         cout<<"NO"<<endl;
         continue;
      }
 
      bool ok=false;
 
      for(auto i:sums){
         if(missing[0]+missing[1]==i){
            ok=true;
            break;
         }
      }
 
      if(ok){
            cout<<"YES"<<endl;
         }
         else{
            cout<<"NO"<<endl;
         }
 
 
 
   }
   return 0;
}
 