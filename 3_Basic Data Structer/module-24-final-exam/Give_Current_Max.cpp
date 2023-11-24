#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        string name;
        int roll;
        int mark;
        Student(string nm, int rl, int mk)
        {
            this->name = nm;
            this->roll = rl;
            this->mark = mk;
        }
};

// custom compare class
class cmp
{
    public:
        bool operator()(Student a, Student b)
        {
            if(a.mark < b.mark) return true;
            else if(a.mark > b.mark) return false;
            else {
                if(a.roll > b.roll) return true;
                else return false;
            }
        }
};
int main()
{
    int n;
    cin >> n;
    // priority queue takes data type, vector of same time, and compare class
    priority_queue<Student,vector<Student>,cmp> pq;
    while(n--)
    {
        string name;
        int roll, mark;
        cin >> name >> roll >> mark;
        Student obj(name,roll,mark);
        pq.push(obj);
    }

    // // let's see what we have
    // while(!pq.empty())
    // {
    //     cout << pq.top().mark << " " << pq.top().roll << endl;
    //     pq.pop();
    // }

    int x;
    while(cin >> x)
    {
        if(x == 0)
        {
         //0 X -> Insert X into the list where X is the data of a student which contain Name, Roll and Marks. Then print the current student's data who has the maximum Marks from the list.   
        string name;
        int roll, mark;
        cin >> name >> roll >> mark;

        Student obj(name,roll,mark);
        pq.push(obj);

        cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;        
        }
        else if(x == 1)
        {
            //1 -> Print the current student's data who has the maximum Marks from the list.
            if(pq.empty())
            {
                cout <<  "Empty" << endl;
            }
            else cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl;  
        }
        else if ( x == 2)
        {
            //2 -> Delete the student who has the maximum Marks from the list and print the current student who has the maximum Marks from the list.
            if(!pq.empty()) pq.pop();
            if(!pq.empty()) cout << pq.top().name << " " << pq.top().roll << " " << pq.top().mark << endl; 
            else cout <<  "Empty" << endl; 
        }
    }
    return 0;
}