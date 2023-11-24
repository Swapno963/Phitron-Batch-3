#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b; cin >> a >> b;
    int lucky_count = 0;
    for(int i=a; i<=b; i++)
    {
        bool is_lucky = true;
        int num = i;
        while(num > 0)
        {
            int degit = num % 10;
            //cout << degit << " ";
            num /= 10;

            if(degit != 4 && degit != 7){
                is_lucky = false;
                break;
            }
        }
        //if(i % 10 == 4 || i % 10 == 7) cout << i << " ";
        if(is_lucky) {cout << i << " ";
            lucky_count++;
        }
        
    }
    if(lucky_count == 0) cout << -1;
    return 0;
}