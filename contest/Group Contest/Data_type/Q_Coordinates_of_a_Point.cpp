#include<bits/stdc++.h>
using namespace std;
int main()
{
    float a,b;
    cin >> a  >> b;
    if(a == 0 && b == 0)
        cout << "Origem\n";
    else if(a == 0)
        cout <<"Eixo Y\n";
    else if(b == 0)
        cout <<"Eixo X\n";
    else{
        if(a > 0){
            if(b > 0) cout << "Q1\n";
            else cout << "Q4\n";
        }
        else{
            if(b > 0) cout << "Q2\n";
            else cout << "Q3\n";
        }
    }
    return 0;
}