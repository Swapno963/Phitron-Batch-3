#include<bits/stdc++.h>
using namespace std;
typedef pair<int,int> pii;
const int N = 1e3+5;
char g[N][N];
bool visited[N][N] ={false};
vector<pii> direc = {{-2,-1},{-2,1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2}};
int n,m;
int dist[N][N] = {-1};
bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j <m  );
}

void bfs(int si, int sj)
{
    int level[N][N] = {0};

    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    while(!q.empty())
    {
        pii f = q.front();
        q.pop();
        int pi = f.first;
        int pj = f.second;
        for(auto d : direc)
        {

            int ci = pi + d.first;
            int cj = pj + d.second;
           // cout << isValid(ci, cj) <<" "<< ci << " " << cj << endl;
            if(isValid(ci, cj) && !visited[ci][cj])
            {
                //level[ci][cj] = level[pi][pj] + 1;

                //cout << ci << " $$" << cj << endl;

                q.push({ci,cj});
                visited[ci][cj] = true;
                dist[ci][cj] = dist[pi][pj] + 1; 
            }
        }
    }
    //cout << level[7][7] << endl;
}

int main()
{
    int test_case; cin >> test_case;
    while(test_case--)
    {
        int ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;
        bfs(ki,kj);
    }






    return 0;
}