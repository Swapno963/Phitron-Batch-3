#include<bits/stdc++.h>
using namespace std;
 
void solve()
{	int n,m,flag=0;
	cin>>n>>m;
	string s,t;
	cin>>s>>t;
	for(int i=1;i<m;i++)
	{	if(t[i]==t[i-1])
		{	flag=1;
			break;
		}
	}
	for(int i=1;i<n;i++)
	{	if(s[i-1]==s[i])
		{	if(s[i-1]==t[0] || s[i]==t[m-1] || flag)
			{	cout<<"NO\n";
				return;
			}
		}
	}
	cout<<"YES\n";
}
 
int main()
{	int t;
	cin>>t;
	while(t--)
	{	solve();
	}
}