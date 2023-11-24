#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        int age;
        char name[100];
        char section;
        int roll;
        Person(int a,char* n, char se, int r)
        {
            // This thing call automatically
            age = a;
            strcpy(name,n);
            section=se;
            roll = r;

        }
};

Person fun()
{
    char name[100] = "Swapno mondol";
    Person r(30,name,'a',53);
    return r;
}
int main()
{
    Person swapno = fun();
    cout <<swapno.name<<endl;
    return 0;
}