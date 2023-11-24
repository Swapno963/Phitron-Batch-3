#include<bits/stdc++.h>
using namespace std;
int main()
{
    list <int> myList = {10,20,30};

    //1 : to know the size
    cout << myList.size() <<endl;

    //2 : Returns the maximum size that the vector can hold.
    cout << myList.max_size() << endl;

    //3 : Clears the list elements. Do not delete the memory, only clear the list. O(N)
    //myList.clear();

    // let's validate
    for(int val:myList)
    {
        cout << val <<" ";
    }
    cout <<endl;

    // let's our list empty or not
    cout <<"Checking is empty :" << myList.empty() << endl;

    // lets resize it,
    myList.resize(2);
    // let's validate
    for(int val:myList)
    {
        cout << val <<" ";
    }
    cout <<endl;

    // lets chage it size to 4
    myList.resize(4);
     // let's validate
    for(int val:myList)
    {
        cout << val <<" ";
    }
    cout <<endl;

    // we can change changed vabiable
      myList.resize(6,2);
     // let's validate
    for(int val:myList)
    {
        cout << val <<" ";
    }
    cout <<endl;

    return 0;
}