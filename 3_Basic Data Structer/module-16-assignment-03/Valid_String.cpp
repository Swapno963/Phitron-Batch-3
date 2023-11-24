#include<bits/stdc++.h>
using namespace std;
int main()
{
    // working with last element

    int test_case; cin >> test_case;
    while(test_case--)
    {
      stack<char> st;
      string txt; cin >> txt;
      for( char c:txt)
      {
        if(st.size() >0)
        {
            if(c == 'B' && st.top() == 'A')
            {
                st.pop();
                continue;
            }
            else if(c == 'A' && st.top() == 'B')
            {
                st.pop();
                continue;
            }
        }
        st.push(c);
      }
    (st.size() == 0) ? cout <<"YES"<<endl : cout <<"NO" <<endl;
    }

    return 0;
}