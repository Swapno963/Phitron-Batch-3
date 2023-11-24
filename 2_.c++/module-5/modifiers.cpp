#include<bits/stdc++.h>
using namespace std;
int main()
{
    string a = "Hello";
    string b = "World";
    // both do the same
    /*
    a+=b;
    a.append(b);
    cout << a <<endl;
    */

//    to expand
    a.push_back('_');
    cout << a << endl;

//  to remove last one 
    a.pop_back();
    cout << a << endl;
    
    // normally we do
    a+='*';
    cout << a  << endl;

    a.erase(1,2); // delete 1 index and delete 2 item
    cout <<a <<endl; 
    return 0;
}