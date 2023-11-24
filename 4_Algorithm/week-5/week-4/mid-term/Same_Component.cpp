#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N = 1e3+5;
char g[N][N];
bool visited[N][N];
vector<pii> direc = {{-1,0},{1,0},{0,-1},{0,1}};
int n,m;
int p1,p2,p3,p4;
bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m && g[i][j] == '.');
}

bool isFound = false;
void bfs(int si, int sj)
{
    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    while(!q.empty())
    {
        pii f = q.front();
        q.pop();
        int pi = f.first;
        int pj = f.second;
        if(pi == p3 && pj == p4) 
        {
            isFound = true;
        }
        for(auto d : direc)
        {
            int ci = pi + d.first;
            int cj = pj + d.second;

            if(isValid(ci, cj) && !visited[ci][cj])
            {
                q.push({ci,cj});
                visited[ci][cj] = true;
                g[ci][cj] = '-';
            }
        }
    }
}

int main()
{
    cin >> n >> m;

    // taking input 
      for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin >> g[i][j];
        }
        
    }

    // agint input 
    cin >> p1 >> p2 >> p3 >> p4;

    bfs(p1,p2);
    if(isFound) cout << "YES" << endl;
    else cout << "NO" << endl;

    return 0;
}