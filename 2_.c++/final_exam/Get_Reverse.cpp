#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int cls;
        char section;
        int math_mark;
        int eng_mark;

};
int main()
{
    int n;
    cin >> n;
    Student st[n];
    for(int i=0; i<n; i++)
    {
        cin >> st[i].name >> st[i].cls >> st[i].section >> st[i].math_mark >> st[i].eng_mark;
        // Student 
        // cout <<nm << cls << sec << m_mark << e_mark << endl ;
    }

    for(int i=n-1; i>=0;i--)
    {
        cout << st[i].name <<" "<< st[i].cls <<" "<< st[i].section <<" "<< st[i].math_mark <<" "<< st[i].eng_mark <<endl;

    }
    return 0;
}