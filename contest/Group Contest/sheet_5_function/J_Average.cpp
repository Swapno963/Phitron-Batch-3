#include<bits/stdc++.h>
using namespace std;

void get_mean(int n, vector<double> ar){
    // cout << n;
    double sum = 0;
    for(int i=0; i<n; i++){
        sum += ar[i];
    }
    cout << fixed << setprecision(7) << sum / n << endl;

}
int main()
{
    int n; cin >> n;
    vector<double> ar(n);   
    
    for(int i=0; i<n; i++)
        cin >> ar[i];

    
    //  for(int i=0; i<n; i++)
    //     cout << ar[i];

    get_mean(n,ar);

    return 0;
}