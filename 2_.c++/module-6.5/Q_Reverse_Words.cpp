#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss;
    ss << s;
    string word,w;
    //cout <<  << endl;
    int count =0;
      while(ss >> word)
    {
        count++;
    }
   // cout << count ;
    int tem = 0;
    while(ss >> word)
    {
      for(int i=word.size()-1; i>=0; i--)
      {
        cout  << word[i] ;
      }
      tem++;
      if(tem<count)
      {

      cout << " ";
      }
      
    }
  
    return 0;
}