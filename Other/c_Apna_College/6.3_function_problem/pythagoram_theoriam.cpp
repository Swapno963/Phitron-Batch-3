#include<bits/stdc++.h>
using namespace std;

bool check_pythagroam(int x, int y, int z)
{
    int a, b , c;
    // storing maximum value in a
    a = max(x,max(y,z));

    // soreing other two
    if(a == x)
    {
        b = y;
        c = z;
    }
    else if(a == y)
    {
        b = x;
        c = z;
    }
    else
    {
        b = x;
        c = y;
    }

    // checking
    if(a*a == b*b + c*c) return true;
    else return false;

}
int main()
{
    int x,y,z;
    cin >> x >> y >> z;
    if(check_pythagroam(x,y,z))
    {
        cout << "YES" <<endl;
    }
    else
    {
        cout <<"NO" <<endl;
    }

    return 0;
}