#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin >> t;
     while(t--)
        {
            long long a,b,c; cin >> a >> b >> c;
                    // Sorting the input values
            long long arr[3] = {a, b, c};
            sort(arr, arr + 3);
            a = arr[0];
            b = arr[1];
            c = arr[2];
            if( a == b && b == c)
                cout << "YES\n";
            else if (b%a == 0 && c%a == 0 && (b/a-1) +(c/a-1) <=3)
                cout << "YES\n";
            else cout << "NO\n";
        }
    return 0;
}