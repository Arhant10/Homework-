//program to check given value is even or odd
#include <stdio.h>
int main()
{
    int x;
    printf("value of x=\n");
    scanf("%d",&x);
    (x&1)?  printf("x is odd") : printf("x is even");
    return 0;


}
