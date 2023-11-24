#include<stdio.h>
void world()
{
    printf("World\n");
}
void hello()
{
    printf("Hello\n");
    world();
    printf("Hello end\n");

}
int main()
{
    printf("main start\n");

    hello();
    printf("main end\n");
    return 0;
}