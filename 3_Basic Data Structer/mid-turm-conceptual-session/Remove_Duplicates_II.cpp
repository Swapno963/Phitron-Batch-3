#include<bits/stdc++.h>
using namespace std;
int main()
{
    // taking list as input
    list <int> el;
    while(true)
    {
        int x; cin >>x;
        if(x == -1)
        {
            break;
        }
        else{
            el.push_back(x);
        }
    }

    // sort it
    el.sort();

    // remove duplicate
    el.unique();

    // print it
    for( auto it = el.begin(); it != el.end(); it++)
    {
        cout << *it << " ";
    }
    
    return 0;
}