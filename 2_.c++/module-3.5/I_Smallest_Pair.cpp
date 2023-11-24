#include<bits/stdc++.h>
using namespace std;
int main()
{
    int test_case;
    cin >> test_case;

    // doing job for test case time
    for(int i=0; i<test_case; i++)
    {
        int n;
        cin >> n;
        int arr[n];

        // taking arr input
        for(int p=0; p<n; p++)
        {
            cin >> arr[p];
        }

        int max = INT_MAX;
        for(int j=0; j<n; j++)
        {
            for(int k=j+1; k<n; k++)
            {
                // cout <<"j : "<<arr[j] <<"k :" <<arr[k]<<endl;
                if(max>arr[j]+arr[k]+(k-j))
                {
                    max = arr[j]+arr[k]+(k-j);
                }
                //cout << arr[j]+arr[k]+(k-j)<<endl;
            }

        }
        cout <<max<<endl;
    }
    //cout << test_case << n;
    return 0;
}