#include<bits/stdc++.h>
using namespace std;


void print_ar(int n,vector<vector<int>> ar){
  for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout << ar[i][j] << " ";
            }
        cout << endl;
    }
}


void change_row(int size,int x, int y, vector<vector<int>> &ar){
    int nar[size];
    for(int i=0; i<size; i++){ // copying x th row
        nar[i] = ar[x-1][i];}
    
    for(int i=0; i<size; i++){ // swaping x row with y col
        ar[x-1][i] = ar[y-1][i];
        ar[y-1][i] = nar[i];
        
        }
}


void change_col(int size, int x, int y,vector<vector<int>> &ar){
    //wap column X with column Y
    int nar[size];
    for(int i=0; i<size; i++){
        nar[i] = ar[i][x-1];

}
    for(int i=0; i<size; i++){
        ar[i][x-1] = ar[i][y-1];
        ar[i][y-1] = nar[i];
    }

// print_ar(size,ar);

}


int main()
{
    int n,x,y; cin >> n >> x >> y;
    vector<vector<int>> ar(n,vector<int>(n));
    // int ar[n][n];

    for(int i=0; i<n; i++)
        for(int j=0; j<n; j++)
            cin >> ar[i][j];

    change_row(n,x,y,ar); 
    change_col(n,x,y,ar); 

    print_ar(n,ar);
  
    return 0;

}