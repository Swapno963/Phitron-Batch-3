#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
    string name;
    int age;
    int mark1;
    int mark2;
    Person(string nm, int a,int m1, int m2)
    {
        name = nm;
        age = a;
        mark1 = m1;
        mark2 = m2;
    }
    void detali()
    {
        cout << name << " " << age<< endl;
    }
    int total_num()
    {
        return mark1 + mark2;
    }
};
int main()
{
    Person Rakib("Rakib khan",20,45,65);

    //cout << Rakib.age<< endl;

    Rakib.detali();

    cout << Rakib.total_num() << endl;
    return 0;
}