// two ways to do it 

#include <stdio.h>
main()
{
    // 1. take input char hisabe char varibale ar moddha rakhbo

    int a,b;
    char p;

    scanf("%d%c %d%c",&a, &p, &b, &p);
    printf("%d%c %d%c \n",a,p,b,p);

    // 2. take % as input, not to store it
    scanf("%d%% %d%%", &a, &b);
    printf("%d%% %d%%", a,b);
    return 0;
}







