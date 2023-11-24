#include<bits/stdc++.h>
using namespace std;
class Person
{
    public:
        int age;
        char name[100];
        float height;
        Person(int a,char* n, float fl)
        {
            // This thing call automatically
            age = a;
            strcpy(name,n);
            height = fl;

        }
};
 




int main()
{
    Person swapno(20,"Swapno mondol",6.0);
    Person simanto(25,"Simanto raj",5.4);

    if(swapno.age>simanto.age)
    {
        cout << swapno.name<<endl;
    }
    else{
        cout << simanto.name<<endl;
    }
    
    

    return 0;


}