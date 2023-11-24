#include <bits/stdc++.h>
using namespace std;

int main() {
    char s[1002];
    char* word;
    
    scanf(" %[^\n]", s);
    
    // Tokenization using strtok
    word = strtok(s, ",!;?. ");
    int count = 0;
    
    while (word != NULL) {
        if (strlen(word) > 0) {
            count++;
        }
        word = strtok(NULL, ",!;?. ");
        // cout << word << endl;

    }
    
    cout << count << endl;
    
    return 0;
}
