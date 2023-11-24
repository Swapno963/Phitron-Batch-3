#include<bits/stdc++.h>
using namespace std;
string minWindow(string s, string t) {
        unordered_map<char, int> map;
        for(auto elem: t) map[elem]++; //build map of t
        int size = INT_MAX;
        int answs, answe;
        int length = 0;
        string ans="";
        int ws=0, count = map.size();
        for(int we=ws; we<s.size(); we++) {
            if(map.count(s[we]) > 0) {
                map[s[we]]--;
                if(map[s[we]] == 0) count--;
            }
            while(count == 0) { //keep shrinking the window till you keep getting ans bc we want shortest length 
                if(we-ws+1 < size) { 
                    answs = ws;       //ans: store ws and we of minimum ans
                    answe = we;
                }
                size = min(size, we-ws+1); //update size
                if(map.count(s[ws]) > 0) {
                    map[s[ws]]++; 
                    if(map[s[ws]] == 1) count++; //make it invalid again
                }
                ws++;
            }
        }
        for(int i=answs; i<=answe; i++) //get the substring of min win found 
            ans+=s[i];
        return ans;
        }
int main()
{
    string s,t; cin >> s >> t;
    
    cout << minWindow(s,t) << endl;
    return 0;
}