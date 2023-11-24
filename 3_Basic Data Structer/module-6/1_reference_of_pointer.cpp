#include<bits/stdc++.h>
using namespace std;

void fun(int *&p ){ // it won't create newe variable
    //*p = 20;
    cout << &p << endl;
    *p = NULL; // changeing pointer value
}
int main()
{
    int val = 10; //Creating variable 
    int *ptr = &val; // storeing address to ptr
    fun(ptr); // sending ptr to fun
    cout << ptr <<endl;
    cout << val;
    return 0;
}