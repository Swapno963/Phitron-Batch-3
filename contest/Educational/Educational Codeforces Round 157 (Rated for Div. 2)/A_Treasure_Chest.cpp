#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
    while(t--){
        int x,y,d; 
        cin >> x >> y >> d;
        if(x > y){
            cout << x << endl;
        }
        else{ // y is bigger
            if(y-x > d){ // out of limit
                cout << x+d+2*(y-x-d) << endl;
            }
            else{ // in the limit
                cout << y << endl;
            }
        }
    }
    return 0;
}