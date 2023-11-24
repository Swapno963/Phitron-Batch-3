#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q; 
    cin >> q;
    while(q--)
    {
        int n; 
        cin >> n;
        vector<int> a;
        for(int i=0; i<n; i++)
        {
            int x; 
            cin >> x;
            if(i ==1 ) cout << "i 0 " << a.back()<< endl;
            if(i && a.back() > x)
                a.push_back(1);
            a.push_back(x);

        }

        cout << a.size() << endl;
        for(int el : a)
            cout << el << " ";
        cout << endl;
    }
    return 0;
}