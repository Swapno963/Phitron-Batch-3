#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1,2,4,3,43,4};

    v.insert(v.begin()+2,100);// want to insert 100 in first 2 index

    // if we want to insert the whole vector then pass vector begining and end pointer
    vector <int> a = {42,32,34};

    v.insert(v.begin()+3,a.begin(),a.end());

    // to delete one item
    //v.erase(v.begin()+2);

    // delete 3 to 5(include)
    //v.erase(v.begin()+3,v.begin()+6);


    // want just first and last element
   // v.erase(v.begin()+1,v.end()-1);
    for(int x:v)
    {
        cout << x<<" ";
    }
    return 0;
}