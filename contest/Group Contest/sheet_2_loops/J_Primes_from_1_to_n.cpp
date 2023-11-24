#include<bits/stdc++.h>
using namespace std;
int prime(int a)
{
    if (a == 2) return 2;
    if(a == 3) return 3;
    bool is_prime = true;
    for(int i=2; i<=sqrt(a); i++)
        if(a % i == 0)
         {
            is_prime = false;
            break;
         }
    if(is_prime)  return a;

}
int main()
{
    int num; cin >> num;
    for(int i=2; i<=num; i++)
    {
        if(prime(i) != 0)cout << prime(i) << " ";
        // cout << i<< " "
    }

    
    return 0;
}