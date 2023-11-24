#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
// taking input
    for(int i=0; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }

// finding minium
    int min = arr[0];
      for(int i=0; i<n; i++)
    {
        if(min>arr[i])
        {
            min = arr[i];
        }
    }

// counting homy many time min occur
    int min_coount = 0;
      for(int i=0; i<n; i++)
    {
        if(arr[i] == min)
        {
            min_coount++;
        }
    }

    // lucky or unlucky
    if(min_coount%2 ==0)
    {
        printf("Unlucky");

    }
    else{
        printf("Lucky");

    }
    return 0;
}