#include<bits/stdc++.h>
using namespace std;
int main()
{
    char line[] = "1 -2 10000 -50 20 7 445";
    char *p,*e;
    long input;
    int count = 0;
    p = line;
    
    for(p = line; ; p = e){
        input = strtol(p, &e,10);
        if(p == e){
            break;
        }
        else{
            count++;
            // cout <<"p is : "<< p << endl;
            // cout <<"e is : "<< e << endl;
        }
    }
    cout << count << endl;
    return 0;
}

/*

#include <iostream>
#include <cstdlib>

int main() {
    const char* str = "12345 67 -42";
    char* endptr;
    long num;

    num = strtol(str, &endptr, 10);
    std::cout << "Number 1: " << num << ", stopped at: " << *endptr << std::endl;

    num = strtol(endptr, &endptr, 10);
    std::cout << "Number 2: " << num << ", stopped at: " << *endptr << std::endl;

    num = strtol(endptr, &endptr, 10);
    std::cout << "Number 3: " << num << ", stopped at: " << *endptr << std::endl;

    return 0;
}
Output:

javascript
Copy code
Number 1: 12345, stopped at: ' '
Number 2: 67, stopped at: ' '
Number 3: -42, stopped at: '\0'

*/