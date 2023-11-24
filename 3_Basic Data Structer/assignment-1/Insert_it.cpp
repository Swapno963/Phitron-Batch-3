#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    // taking input of first array
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin >> a[i];
    }

    // taking input of second array
    int m; cin >> m;
    int b[m];
    for(int i=0; i<m; i++)
    {
        cin >> b[i];
    }

    int insert_index_start; cin >> insert_index_start;
    int insert_index_end = insert_index_start + m-1;

    // start inserting 
    vector<int> inser_ar;
    int x=0;
    int y=0; 
    for(int i=0; i<n+m; i++)
    {
        if(i>=insert_index_start && i<=insert_index_end)
        {
            inser_ar.push_back(b[y]);
            y++;
        }
        else 
        {
            inser_ar.push_back(a[x]);
            x++;
          
        }
    }

    // printing 
    for(int val:inser_ar)
    {
        cout <<val << " ";
    }

    //cout << insert_index_start << " " << insert_index_end;
    return 0;
}