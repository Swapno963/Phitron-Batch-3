#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    stringstream ss;
    ss << s;
    int count =0;
    string word;
    while(ss >> word)
    {
        // count++;
        if(word[0] >='a' && word[0] <='z' || word[0] >= 'A' && word[0] <= 'Z' || word[0] >=0 && word[0]<=9)
        {
            count++;
        }
        //cout << word[0]  << endl;
    }
    cout <<count <<endl;
    return 0;
}