#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q; cin >> n >> q;
    string str; cin >> str;
    while(q--)
    {
        string q_str; cin >> q_str;
        if(q_str == "substr"){ // done
            int st,en; cin >> st >> en;
            for(int i=st-1; i <=en-1; i++)
                cout <<str[i];
            
            cout << endl;
        }
        else if(q_str == "sort"){
            string new_str;
            int st,en; cin >> st >> en;

            // copy first
             for(int i=0; i <=st-1; i++)
                new_str += str[i];

            sort()

            // copy last
            for(int i=en-1; i <=str.length(); i++)
                new_str += str[i];

            str = new_str;
        }

        else if(q_str == "pop_back")
            str.pop_back();

        else if(q_str == "back")
            cout << str[str.length()-1] << endl;

        else if(q_str == "reverse"){
            string new_str;
            int st,en; cin >> st >> en;

            // copy first
             for(int i=0; i <=st-1; i++)
                new_str += str[i];

            for(int i=en-1; i >=en-1; i--)
                new_str += str[i];

            // copy last
            for(int i=en-1; i <=str.length(); i++)
                new_str += str[i];

            str = new_str;
        }
        else if(q_str == "front")
            cout << str[0] << endl;
        else if(q_str == "push_back"){
            string i; cin >> i;
            str += i;
        }
        else if(q_str == "print")
        {
            int pos; cin >> pos;
            cout << str[pos-1] << endl;
        }
    }
    return 0;
}