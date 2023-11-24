#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);

//  declearing arr size and take element as inut
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }

// remove element
int remove_index;
scanf("%d",&remove_index);
for(int i=remove_index; i<n-1; i++){
    arr[i] = arr[i+1];
}

// printing elements
    for(int i=0; i<n-1; i++){
        printf("%d ", arr[i]);
    }
    return 0;
}