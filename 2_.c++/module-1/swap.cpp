#include<iostream>
#include<utility>
using namespace std;
void my_swap(int *a,int *b)
{
    int tem = *a;
    *a = *b;
    *b = tem;
    
}
int main()
{
    int a,b;
    cin>>a>>b;
    my_swap(&a,&b);
    cout <<a<<b;
}