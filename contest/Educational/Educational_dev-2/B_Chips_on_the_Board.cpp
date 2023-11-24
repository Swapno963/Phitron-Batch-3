#include <bits/stdc++.h>
using namespace std;
int main()
{
  long long n1; // 4
  cin>>n1;
  for(long long i=0; i<n1; i++)
  {
        cout<< "i is : " << i << endl;

    long long n, in, ans=0, c=1e16, d=1e16, sx=0, sy=0;
    cin>>n;
    map<long long,long long> mx, my;
    for(long long j=0; j<n; j++)
    {
      cin>>in;
      c=min(c, in);
      //cout << in << " ";
      mx[in]++;
    }
    for(long long j=0; j<n; j++)
    {
      cin>>in;
      d=min(d, in);
      my[in]++;
    }
    for(auto it: mx)
    {
        cout <<"it : "<< it.first << " " << it.second << endl;
      sx+=it.first*(it.second);
      cout << sx << endl;
    }
    for(auto it: my)
    {
      sy+=it.first*(it.second);
    }
    cout << "d is " << d << "c is  "<< c << endl;
    ans=min(d*(n)+sx, c*(n)+sy);
    //cout<<ans<<endl;

    cout << endl;
  }
  return 0;
}