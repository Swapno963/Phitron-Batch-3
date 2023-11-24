#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v ={1,2,3,4,5};
    vector <int> x = {43,43,23};
    x = v; // hear complexity is bigger n size

    x.pop_back();
    x.pop_back(); // remove last element
    for(int i=0; i<x.size(); i++)
    {
        cout << x[i] << " "<< endl;
    }
    return 0;
}