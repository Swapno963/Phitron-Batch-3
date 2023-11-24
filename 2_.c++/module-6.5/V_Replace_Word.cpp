#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    //EGYPT
    for(int i=0; i<s.size()-5; i++)
    {
      //cout << tem;
      if(s[i]=='E' && s[i+1]=='G'&&s[i+2]=='Y'&&s[i+3]=='P'&&s[i+4]=='T'){
        cout <<" ";
      }
        cout <<s[i]<< "";
    }
   
    return 0;
}