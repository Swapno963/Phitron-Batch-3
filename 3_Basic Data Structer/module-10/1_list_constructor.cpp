#include<bits/stdc++.h>
using namespace std;
int main()
{
    //way 1 :O(N) 
    list <int> myList2(10,4);// create 10 variable and store 4 in them

    // way 2:O(N)
    list<int> myList(myList2); 

    // way 3:O(N)
    int a[3] = {10,20,30};
    list<int> myListArr(a, a+3);

    //way 4 :O(N)
    vector <int> v = {10,20,30};
    list <int> myListVec(v.begin(),v.end());


    // loop 1 : 
    // it's complextity is o(n)
    for(auto it = myList.begin(); it != myList.end(); it++)
    {
        cout << *it << endl;
    }

    // loop 2 : 
    for(int val:myListVec)
    {
        cout << val <<" ";
    }
    return 0;
}