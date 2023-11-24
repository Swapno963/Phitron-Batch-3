#include<bits/stdc++.h>
using namespace std;
class Person 
{
    public:
        string name;
        int cls;
        char section;
        int id;
};
int main()
{
    int n;
    cin >>n;
    Person st[n];

    // Taking input
    for(int i=0; i<n; i++)
    {
        cin >>st[i].name>>st[i].cls>>st[i].section>>st[i].id;
    }

    // swap id of person
    int start =0;
    int end = n-1;
    while(start <end)
    {
        int tem = st[start].id;
        st[start].id = st[end].id;
        st[end].id = tem;
        start++;end--;
    }
    // Giving Output
     for(int i=0; i<n; i++)
    {
        cout <<st[i].name<<" "<<st[i].cls<<" "<<st[i].section<<" "<<st[i].id<<endl;
    }

    return 0;
}