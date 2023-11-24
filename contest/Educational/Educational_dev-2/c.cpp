#include <bits/stdc++.h>
 
 
using namespace std;
 
typedef long long ll;
 
 
int main() {
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        int s[n];
        int e[n];
        int flag=1;
        int exists=0;
        for(int i=0;i<n;i++){
            cin>>s[i]>>e[i];
        }
        for(int i=1;i<n;i++){
            if(e[i]>=e[0] && s[i]>=s[0]){
                flag=0;
                break;
            }
            
        }
        if(flag==0){
            cout<<-1<<endl;
        }
        else{
            cout<<s[0]-1<<endl;
        }
        
    }
    
 
    return 0;
}