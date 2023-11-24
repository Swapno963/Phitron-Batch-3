#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        string s,rep_word;
        cin >> s >> rep_word;
        int rep_index = s.find(rep_word);
        while(rep_index != -1)
        {
            s.replace(rep_index,rep_word.size(),"$");
            rep_index = s.find(rep_word);
        }
        //cout << s << " " << rep_word << endl;
        cout << s << endl;
    }

    return 0;
}