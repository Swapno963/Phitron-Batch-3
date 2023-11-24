#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num; cin >> num;
    int num2 = num;

    vector<int> v;
    while(num > 0)
    {
        int degit = num % 10;
        v.push_back(degit);
        num /= 10;
    }
    //reverse(v.begin(), v.end());

    // for(auto a : v) cout << a << " ";
    int st = 0; 
    int en = v.size()-1;
    bool is_palin = true;
    while(st <= en)
    {
        if(v[st] != v[en])
            is_palin = false;
        st++;
        en--;
    }

    if(is_palin) cout << num2 <<"\n" << "YES\n";
    else {
        bool got_degit = false;
        for(auto a : v){
            if(!got_degit && a == 0) continue;
            else {
                got_degit = true;
                 cout << a ;
            }

        }
          cout <<  "\n" << "NO\n";
    }
    return 0;
}