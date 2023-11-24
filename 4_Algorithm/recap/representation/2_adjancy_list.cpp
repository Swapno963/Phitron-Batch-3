#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,e;
    cin >> n >> e;
    vector<int> adj[n+1]; // creating n+1 size array and every index of this arry have a vector,

    // array ar moddha vector rakha hy krn, vector initally 0 size ar hy, tai 3,4 or onno kicu oi index a rakha jai nah, tai arry akta size diea create kora hy

    while(e--)
    {
        int a, b;
        cin >> a >> b;
        adj[a].push_back(b);
        adj[b].push_back(a); // if we want to work with directed graph then we need to comment this line;
    }



    // printing our adj list

    for(int i=0; i<=n; i++)
    {
        cout << "Index " << i << " :";
        for(int j=0; j<adj[i].size(); j++)
        {
            cout << adj[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}