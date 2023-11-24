#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, m; cin >> n >>m;
    vector<string> snake(n,string(m,'.'));

    for(int i=0; i<n; i+=2){
        for(int j = 0; j<m; j++){
            snake[i][j] = '#';
        }
    }

    for(int i=1; i<n; i+=4){
        snake[i][m-1] = '#';
    }

    for(int i=3; i<n; i+=4){
        snake[i][0] = '#';
    }
    

    // print result
    for(int i=0; i<n; i++)
    cout << snake[i] << endl;
    return 0;

}