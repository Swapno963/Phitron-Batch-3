#include<bits/stdc++.h>
using namespace std;

// giving a value to n which can be access from class
#define n 100;

class myStack{
    int *arr;
    int top;

    public:
    myStack()
    {
        arr = new int[n];
        top=-1;
    }
    // incriseing index by top and storing if top not equal -1
    void push(int x)
    {
        if(top == n-1)
        {
            cout <<"myStack overflow"<<endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    // if top equal -1 then we send message and return else we return top index value
    int Top()
    {
        if(top == -1)
        {
            cout <<"No element in myStack" <<endl;
            return -1;
        }

        return arr[top];
    }

    // checking our myStack is empty or not by returning top == -1 or not
    bool empty()
    {
        return top == -1;
    }

    // if topp == -1 then we can't pop, or we can decrise top
    void pop()
    {
        if(top == -1)
        {
            cout << "No element to pop" << endl;
            return;
        }

        top--;
    }

};
int main()
{
    myStack st;

    st.push(1);
    st.push(2);
    st.push(3);
    cout <<st.Top() <<endl;
    st.Top();
    st.pop();
    st.pop();
    st.pop();
    cout << st.empty() <<endl;
    return 0;
}