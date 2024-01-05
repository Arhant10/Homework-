#include <stdio.h>
int main(){
    int x,y,z;
    printf("enter the value of x,y,z\n");
    scanf("%d,%d,%d",&x,&y,&z);
    int a=x+y,b=x+z,c=y+z;
    (a==b)? printf("they are equal") : printf("they are not equal\n");
    (a==c)?printf("a and c are equal\n") : printf("a and c are unequal\n");
    (b==c)?printf("b and c are equal/n") : printf("b and c are unequal\n");
    return 0;
}
