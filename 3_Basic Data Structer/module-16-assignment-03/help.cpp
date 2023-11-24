#include<bits/stdc++.h>
using namespace std;

char color_match(char c1,char c2)
{
    if((c1=='R' && c2=='B')||(c1=='B' && c2=='R'))
    {
        return 'P';
    }
    if((c1=='R' && c2=='G')||(c1=='G' && c2=='R'))
    {
        return 'Y';
    }
    if((c1=='B' && c2=='G')||(c1=='G' && c2=='B'))
    {
        return 'C';
    }

  return ' ';

}

int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        char ct;
        cin>>n;
        stack<char> st;
        for(int i=0;i<n;i++)
        {
            cin>>ct;
            if(!st.empty())
            {
                char c1=st.top();
                if(c1=='Y'||c1=='P'||c1=='C')
                {
                    st.push(ct);
                }
                else if(c1==ct)
                {
                    st.pop();
                }
                else
                {
                    st.pop();
                    if(!st.empty())
                    {
                        if(color_match(c1,ct)==st.top())
                        {
                            st.pop();
                        }
                        else
                        {
                            st.push(color_match(c1,ct));
                        }
                    }
                    else
                    {
                        st.push(color_match(c1,ct));
                    }

                }
            }

            else
            {
                st.push(ct);
            }
        }
        string string_final;
        while(!st.empty())
        {
            char f=st.top();
            st.pop();
            string_final+=f;
        }
        reverse(string_final.begin(),string_final.end());
        cout<<string_final<<endl;
    }

return 0;
}