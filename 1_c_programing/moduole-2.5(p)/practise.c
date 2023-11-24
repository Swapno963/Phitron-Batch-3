#include<stdio.h>
int main()
{
    // pb-1 : print
    //printf("Recently I heard that you’ve achieved 95%% marks in your exam.\nThis is brilliant!\nI wish you’ll shine in your life!\tGood luck with all the barriers(/\\) in your life");
    
    // pb-2  :

    /*
    int a,b;
    scanf("%d %d",&a,&b);
    printf("%d+%d=%d\n",a,b,a+b);
    printf("%d-%d=%d\n",a,b,a-b);
    printf("%d*%d=%d\n",a,b,a*b);
    printf("%d/%d=%0.2f\n",a,b,a*1.0/b);

    */

//    pb-3: even or odd
/*
    int a;
    scanf("%d" , &a);
    if(a>=0 )
    {
        if(a%2 == 0)
        {
            printf("even");
        }
        else{
            printf("odd");
        }
    }
*/
    
    // pb-4: positive or negative or zero
    /*
    int a;
    scanf("%d",&a);
    if(a==0)
    {
        printf("zero");
    }
    else if (a>0)
    {
        printf("positive");
    }
    else
    {
        printf("negative");
    }
    
    */
//    pb-5: shopping
    int a;
    scanf("%d",&a);
    if(a>=10000)
    {
        printf("Gucci Bag\n");
        if(a>20000)
        {
            printf("Gucci Belt");
        }
    }
    else if (a>=5000)
        {
            printf("Levis Bag");
        }
        else{
            printf("Something");
        }
    return 0;
}