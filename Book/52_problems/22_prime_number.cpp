#include<bits/stdc++.h>
using namespace std;
#define size 100001
char ara[size];
void solve(){
    int i,j,root;
    //  set all the valu to 1
    for(int i=2; i<size; i++){
        ara[i]= 1;    
    }

    root = sqrt(size);
    for(int i=2; i<= size; i++){
        if(ara[i] == 1){
            for(j=2; i*j <= size; j++){
                ara[i*j] = 0;
            }
        }
    }


}
int main()
{
    int t,a,b,count;
    solve();

    cin >> t;
    while(t--){
        cin >> a >> b;
        count = 0;
        for(int i=a; i<=b; i++){
            if(ara[i])
                count++;
        }
        cout << count << endl;
    }

    return 0;
}