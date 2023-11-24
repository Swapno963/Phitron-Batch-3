#include<bits/stdc++.h>
using namespace std;
int main()
{
    //He got an empty grid of size n×m , its rows are numbered from 1 through n and its columns are numbered from 1 through m , and it is initially filled with dots "."

    //each instruction contains 4 integers r1,c1,r2,c2 and a lowercase Latin letter c, meaning that have to fill the sub-grid between rows r1 and r2 and columns c1 and c2, with the letter c.
    int n,m,q,r1,c1,r2,c2;
    char a;
    cin >> n >> m >>q;
    char ar[n][m];

    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            ar[i][j] = '.';
        }
    }

   
    while(q--){
        cin >> r1 >> c1 >> r2 >> c2 >> a;
         for (int i = r1-1; i < r2; i++) {
            for (int j = c1-1; j < c2; j++) {
                ar[i][j] = a;
            }
        }
    }

    // printing
      for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
           cout <<  ar[i][j];
        }
        cout << endl;
    }
    return 0;
}