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

Student fun()
{
    char name[100] = "Swapno mondol";
    Student r(30,name,'a',53);
    return r;
}
int main()
{
    Student swapno = fun();
    cout <<swapno.name<<endl;
    return 0;
}