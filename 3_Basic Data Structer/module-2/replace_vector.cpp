#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <int> v = {1, 3,4, 3, 2 ,2,32,2,23,2,32,2};

    //  to replae 2 with 500
    //replace(v.begin(),v.end(),2,500);

    // if i don't want to replae the las  2
    //replace(v.begin(),v.end()-1,2,500);

    // watching ouput
    // for(int x:v)
    // {
    //     cout <<x <<" ";
    // }


    //vector <int> ::iterator it;
    auto it = find(v.begin(),v.end(),300);
    cout <<*it<<endl;
    if(it==v.end()) cout <<"Not Found\n";
    else cout <<"Found\n";

    // let's see v.end() means
    cout << *v.end(); // maybe some random value

    
    return 0;
}