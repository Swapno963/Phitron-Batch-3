#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        int age;
        char name[100];
        char section;
        int roll;
        Student(int a,char* n, char se, int r)
        {
            // This thing call automatically
            age = a;
            strcpy(name,n);
            section=se;
            roll = r;

        }
};
int main()
{
   Student sm(20,"Swapno mondol",'d',43);
   Student smin(25,"Simanto raj",'a',33);


//    let's check we got or not
    cout << sm.name<<endl;
    cout << smin.name<<endl;
    return 0;
}