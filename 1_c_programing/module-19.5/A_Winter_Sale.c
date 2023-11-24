#include<stdio.h>
int main()
{
    //  float result lagle input o float lagbe
    float precent, discount_price;
    scanf("%f %f",&precent,&discount_price);
    float original_price = (discount_price*100)/(100-precent);
    printf("%.2f",original_price);
    return 0;
}