#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string rep_str;
    cin >> s;
    cin >> rep_str;
    // cout <<rep_str.size();
   // cout <<s.find("ap");
    int find_ind = s.find("ap");
    //cout << find_ind
    while(find_ind !=-1)
    {       
        s.replace(find_ind,rep_str.size(),"$");
        find_ind = s.find("ap");
        //cout << find_ind<<endl;
    }
    cout << s;
    return 0;
}