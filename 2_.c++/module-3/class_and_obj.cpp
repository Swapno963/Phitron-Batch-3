#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
    char name[100];
    int roll;
    char section;
};

int main()
{

    // for rahim
    Student rahim;
    rahim.roll = 20;
    rahim.section = 'c';
    char nm[100] = "Rahim uddit";
    strcpy(rahim.name,nm);

    // for karim
    Student karim;
    karim.roll = 10;
    karim.section = 'a';
    char nm2[100] = "karim uddit";
    strcpy(karim.name,nm2);

    cout  <<rahim.roll<<endl;
    return 0;
}