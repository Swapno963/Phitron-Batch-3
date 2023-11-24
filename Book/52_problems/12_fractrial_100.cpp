#include<bits/stdc++.h>
using namespace std;
int countTrailingZeroInFactorial(int n){
    int count = 0;
    while(n>=5){
        n/=5;
        count += n;
    }
    return count;
}
int main()
{

    int num; cin >> num;
    cout << countTrailingZeroInFactorial(num) << endl;
    return 0;
}