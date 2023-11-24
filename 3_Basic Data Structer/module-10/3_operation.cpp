#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> myList = {10, 30,20,30, 90,20,10};

    // remove every 10 from list
    myList.remove(10); // O(N)

    // we can sort assending or decending
    //myList.sort(); // O(N LONG(N))
    // sort big to small
    myList.sort(greater<int>());

    // to remove duplicate we need to sort the list first
    myList.unique(); // O(N)


    // reverse the list
    myList.reverse();
    
    //  printing mylist
    for(int val:myList)
    {
        cout << val <<" ";
    }
    return 0;
}