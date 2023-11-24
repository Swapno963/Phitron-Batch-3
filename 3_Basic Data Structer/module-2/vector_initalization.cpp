#include<bits/stdc++.h>
using namespace std;
int main()
{
    // w-1: inializing int type vector called vector which have 0 element
    //vector <int> v;

    // w-2: now it's size is 5, and every element is 0
    //vector <int> v(5);

    // w-3:now it's size is 5, and every element is 7
    //vector<int>v(5,7);

    // w-4: we can copy from another vector
    //vector <int> v1(4,100);
    //vector <int> v(v1);


    // w-4: we can copy from another array
    //int arr[3] = {1,2,3};
    //vector <int> v(arr,arr+3);


    //w-5: 
    vector<int>v;
    v = {1,5,3};

    // printing vector element
    for(int i=0; i<v.size(); i++)
    {
        cout <<v[i]<<endl;
    }
    cout << v.size()<<endl;
    return 0;
}