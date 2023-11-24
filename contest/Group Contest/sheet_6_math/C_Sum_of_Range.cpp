#include<bits/stdc++.h>
using namespace std;
void all_sum(int a,int b){
    long long sum = 0;
    long long odd_sum = 0;
    long long even_sum = 0;
    int st = min(a,b);
    int ed = max(a,b);
    for(int i=st; i<=ed; i++){
        sum +=i;
        if(i % 2 != 0)
            odd_sum +=i;
        if(i % 2 == 0)
            even_sum +=i;
    }
    cout <<sum << endl;
    cout << even_sum << endl;
    cout << odd_sum << endl;
}


int main()
{
    int a,b; cin >> a >> b;
    all_sum(a,b);
  
    return 0;
}