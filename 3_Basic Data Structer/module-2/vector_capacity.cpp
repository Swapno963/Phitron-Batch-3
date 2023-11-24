#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v;

    //cout << v.max_size() << endl; // gieves the max size

    // to know about capacity, when it overload, it incris it's capacity two times
    cout << v.capacity() << endl;
   
    v.push_back(30);
    cout << v.capacity() << endl;

    v.push_back(30);
    cout << v.capacity() << endl;

    v.push_back(30);
    cout << v.capacity() << endl;
    cout << "Understand clear"<< endl;
    
    //v.clear(); // it's make the size 0 but don't delet it's element, we can access it by v[0]
    for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << endl;
    }

    cout << v[2] << endl;

    cout <<"Checking vector empty or not " << v.empty() << endl;

    // resize = given size is smaller then it delete the other, if that is bigger then it give 0 or as we give
     
    v.resize(2);
    v.resize(7,3);
      for(int i=0; i<v.size(); i++)
    {
        cout << v[i] << endl;
    }



    return 0;
}