#include<bits/stdc++.h>
using namespace std;
void reverse_str(char str[]){
    for(int i=strlen(str)-1; i>=0; i--){
        cout << str[i];
    }
    cout << " ";

}
int main()
{
    int i,t,j,k;
    char s[1002], word[1002];
    cin >> t;
    for(int i=0; i<t; i++){
        scanf(" %[^\n]",s);
        // cout << s << endl;
        int s_len = strlen(s);
        for(j=0, k=0; j<s_len; j++){
            if(s[j] != ' '){
                word[k] = s[j];
                k++;
            }
            else if(k > 0){
                word[k] = '\0';
                // cout << word << endl;
                reverse_str(word);
                k = 0;
            }
        }
        if(k>0){
            word[k] = '\0';
            // cout << word << endl;
            reverse_str(word);
            k = 0;
        }
    cout << endl;
    }
    return 0;
}