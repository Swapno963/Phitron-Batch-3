#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n; cin >> n;
    string str; cin >> str;

    long long score = 0;
    for(int i=0; i<str.length(); i++)
    {
        //cout << i  <<endl;
        if(str[i] == 'V')
            score += 5;
        else if(str[i] == 'W')
            score +=2;
        else if(str[i] == 'X')
            i++;
        else if(str[i] == 'Y')
        {
            str += str[i+1];
            i += 1;
        }
        else if(str[i] == 'Z'){
            if(str[i+1] == 'V'){
                score /= 5;
                i += 1;}
            if(str[i+1] == 'W'){
                score /= 2;
                i += 1;}
        }
    }
    cout << score << endl;
    return 0;
}