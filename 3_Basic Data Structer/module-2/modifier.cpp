#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v ={1,2,3,4,5};
    
    // to see the last element
    cout << v.back() << endl;


    // for the first element
    cout << v.front() << endl;

    // to print all one by one
    for(auto it=v.begin(); it<v.end();it++)
    {
        cout << *it << " ";
    }
    return 0;
}