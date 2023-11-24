#include<bits/stdc++.h>
using namespace std;

// object
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
    // Let's create dynamic object
    char name[100] = "Swapno Mondol";
    Student* swapno = new Student(30,name,'a',53);
   
   // way 1 
    // cout <<(*swapno).age<<endl;
    // (*swapno).age = 39;
    // cout <<(*swapno).age<<endl;

    // way 2
    cout << swapno->age<<endl;
    swapno->age = 45;
    cout <<swapno->age<<endl;

    // other idea
    // int *a = new int;
    // *a = 100;
    // cout <<*a<<endl;
    return 0;
}