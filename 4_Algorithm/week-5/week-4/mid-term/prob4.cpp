#include<bits/stdc++.h>
using namespace std;

#include<bits/stdc++.h>
using namespace std;

int n,m;
typedef pair<int,int> pii;
const int N = 1e3+5;
char g[N][N];
bool visited[N][N];
vector<pii> direc = {{-2,-1},{-2,1},{-1,-2},{1,-2},{2,-1},{2,1},{1,2},{-1,2}};
int dist[N][N];


bool isValid(int i, int j)
{
    return (i >= 0 && i < n && j >= 0 && j < m );
}

void bfs(int si, int sj, int qi, int qj)
{
    queue<pii> q;
    q.push({si, sj});
    visited[si][sj] = true;
    dist[si][sj] = 0;

    while(!q.empty())
    {
        pii f = q.front();
        q.pop();
        int pi = f.first;
        int pj = f.second;
        // if(pi == qi && pj == qj) {
        //     cout << dist[pi][pj] << endl;
        //     break;
        // }

        for(auto d : direc)
        {

            int ci = pi + d.first;
            int cj = pj + d.second;
           //cout << isValid(ci, cj) <<" "<< ci << " " << cj << endl;
            if(isValid(ci, cj) && !visited[ci][cj])
            {

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
    //cout << test_case <<endl;
    while(test_case--)
    {
        int ki, kj, qi, qj;
        cin >> n >> m >> ki >> kj >> qi >> qj;

         for(int i=0; i<N; i++)
        {
            for(int j=0; j<N; j++)
            {
                dist[i][j] = -1;
                visited[i][j] = false;
            }

        }

        bfs(ki,kj,qi,qj);
        cout << dist[qi][qj] <<endl;
       
    }

    return 0;
}