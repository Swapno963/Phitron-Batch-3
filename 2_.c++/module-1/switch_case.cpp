#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int a;
    switch (a%2)
    {
    case 0:
        cout <<"Even";
        break;
    case 1:
        cout <<"Odd";
    default:
        cout << "This is negative";
        break;
    }
    return 0;
}