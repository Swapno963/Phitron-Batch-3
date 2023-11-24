#include<stdio.h>


// Has Return + Parameter
int multiply(a,b){
    return a*b;
}

// Has Return + No Parameter
int your_age(void){
    return 20;
}
// No Return + Parameter
void is_adult(age){
    if(age>=18){
         printf("You are adult\n");
    }
    else{
        printf("You are not adult\n");
    }
   
}

// No Return + No Parameter
void say_name(void){
    printf("My name is Swapno\n");
}
int main()
{

//  Has Return + Parameter
printf("%d\n",multiply(3,4));

// Has Return + No Parameter
printf("%d\n",your_age());

// No Return + Parameter
is_adult(20);

// No Return + No Parameter
say_name();

    return 0;
}