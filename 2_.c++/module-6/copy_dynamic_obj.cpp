#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            this->name = name;
            this->age = age;
        }
};
int main()
{
    Person* rakib = new Person("Rakib kahn", 30);
    Person* sakib = new Person("sakib kahn", 35);

    //sakib = rakib; // if we delete rakib then we will get segmentation falt, after deleting it . because it go to rakib addresss

    //or
    *sakib = * rakib;
    delete rakib;
    cout << sakib->name<< endl;
    return 0;
}