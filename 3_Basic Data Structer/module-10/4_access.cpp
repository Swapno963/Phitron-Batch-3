#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> myList = {10,40,20,90,70,30,10};

    // first element
    cout << myList.front() << endl;

    // last element
    cout << myList.back() << endl;

    // to get value from specific index
    cout << *next(myList.begin(),3) <<endl;
    return 0;
}