#include<bits/stdc++.h>
using namespace std;

#define n 100;

class myQueue{
    int *arr;
    int front;
    int back;

    public:
    myQueue()
    {
        arr= new int[n];
        front = -1;
        back = -1;
    }

    // push element when front and back both are -1 then we incrise both else jus back
    void push(int x)
    {
        // if back rech to last index then we are not doing anything
        if(back == n-1)
        {
            cout <<"Queue overfolloe" <<endl;
            return;
        }

        back++;
        arr[back] = x;

        if(front == -1)
        {
            front++;
        }

    }

// if front == -1 it's mean we don't have any element to pop or front rich end
    void pop()
    {
        if(front == -1 || front>back)
        {
            cout << "No element in the que" << endl;
            return;
        }
        
        front++;

    }

    int peek()
    {
        if(front == -1 || front>back)
        {
            cout << "No element in the que" << endl;
            return -1;
        }
        return arr[front];

    }

    bool empty()
    {
        if(front == -1 || front>back)
        {
            return true;
        }
        return false;
    }

};

    
int main()
{
    myQueue q;
    q.push(1);
    q.push(2);
    q.push(3);

    cout << q.peek() << endl;

    q.pop();
    cout << q.peek() << endl;

    return 0;
}