#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case; cin >> test_case;
    cin.ignore(); // getline can't word after takeing int input
    while(test_case--)
    {
        string sentence;
        getline(cin, sentence); 
        string word;
        stringstream ss(sentence);
        map<string, int> mp;

        int mx = 0; string mx_str;
        while(ss >> word)
        {
            mp[word]++;
            if(mp[word] > mx)
            {
                mx =  mp[word];
                mx_str = word;
            }
            //cout << mp[word] << " " << word << endl;
        }
        cout << mx_str <<" " << mp[mx_str] << endl;;
    }
    return 0;
}