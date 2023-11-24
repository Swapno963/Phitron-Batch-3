#include<bits/stdc++.h>
using namespace std;
namespace Rakib
{
    int age = 40;
    string name = "Rakib";
}
namespace Sakib
{
    int age = 43;
    string name = "Sakib";
}
int main()
{
    using namespace Rakib;

    //cout << Rakib::name<<endl; // it can be a way of printing name or we can handel smartly
    
    
    //cout << name; // though there is no variable in main but before giving error it check in rakib name sapce. though rakib and sakib both have name and age but it going to rakib because we said using namespace rakib
    // otherwise it give erro to handel we need to give different name
    return 0;
}