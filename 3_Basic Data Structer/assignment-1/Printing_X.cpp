#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >>n;
    
    int row = 0; int col = n-1;
    int x_ind = n/2;

    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {

            if(i ==x_ind && j == x_ind)
            {
                cout <<"X";
            }
            else if(j == row){
                cout << "\\"; 
               
            }

            else if(j == col)
            {
                cout << "/";
                
            }
            else{
                cout << " ";
            }

            // space
            //for(i)
            // condition
            
        }
          row++;  col--;
        cout <<"\n";
    }
    return 0;
}