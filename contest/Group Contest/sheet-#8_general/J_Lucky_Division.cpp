#include<bits/stdc++.h>
using namespace std;
vector<int> v;
void is_lucky(){
    for(int i=4; i<=1000; i++){
        int n = i;
    bool falg = true;
        while(n > 0){
            int degit = n % 10;
            if(degit != 4 && degit != 7){
                // cout << degit << " ";
                falg = false;
                break;
                }
            n /= 10;
        }
        if(falg) v.push_back(i);
    }
}
int main()
{
    int n; cin >> n;
    is_lucky();
    for(auto a:v) {
        if(n %a == 0) {
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
    return 0;
}