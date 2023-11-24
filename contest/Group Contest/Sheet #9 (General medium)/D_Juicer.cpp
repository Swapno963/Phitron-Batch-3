#include<bits/stdc++.h>
using namespace std;
int main()
{
    /*
    The juicer has a special section to collect waste. It overflows if Kolya squeezes oranges of the total size strictly greater than d. When it happens Kolya empties the waste section (even if there are no more oranges) and continues to squeeze the juice. How many times will he have to empty the waste section?

    Input
    The first line of the input contains three integers n, b and d (1 ≤ n ≤ 100 000, 1 ≤ b ≤ d ≤ 1 000 000) — the number of oranges, the maximum size of the orange that fits in the juicer and the value d, which determines the condition when the waste section should be emptied.

    The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 1 000 000) — sizes of the oranges listed in the order Kolya is going to try to put them in the juicer.
    */

    int n,b,d,count=0; 
    cin >> n >> b >>d;
    int sum = 0;
    while(n--){
        int x; cin >> x;
        if(x <= b){
            sum += x;
            if(sum > d){
                count++;
                sum = 0;
            }
        }
    }
    cout << count << endl;
    return 0;
}