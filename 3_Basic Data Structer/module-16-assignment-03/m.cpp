#include<bits/stdc++.h>
using namespace std;
int main()
{
    // working with last element

    int test_case; cin >> test_case;
    while(test_case--)
    {
      stack<char> st;
      int char_num; cin >> char_num;
      string txt; cin >> txt;

    //   output string
    string result = "";
      for( char c:txt)
      {
        if(st.size()>0)
        {
             if(c == st.top())
            {
                st.pop();
                continue;
            }
             else if((c=='R' && st.top()=='B') || (st.top()=='R' && c=='B'))
            {
                st.pop();
                st.push('P');
                continue;
            }
              else if((c=='R' && st.top()=='G') || (st.top()=='R' && c=='G'))
            {
                st.pop();
                st.push('Y');
                continue;
            }
              else if((c=='G' && st.top()=='B') || (st.top()=='G' && c=='B'))
            {
                st.pop();
                st.push('C');
                continue;
            }
           else
           {
                        st.push(c);

           }

        }
        else
        {
            st.push(c);
        }
                    //cout << "c is" << c <<" "<<" top is "<<st.top() <<endl;

      }



    stack<char> nst;
    while(!st.empty())
    {   if(nst.size()>0)
        {
            if(nst.top() == st.top())
            {
                nst.pop();
                st.pop();
                continue;
            }
        }
        nst.push(st.top());
        st.pop();
    }


    // output
      while(!nst.empty())
    {
        cout << nst.top() ;
        nst.pop();
    }
    cout <<endl;
    }

    return 0;
}