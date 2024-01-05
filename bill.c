#include<stdio.h>
int main(){
int a,b,x,c,v,b;
a=x-b;
c=a*1.5;
v=a*2.5;
b=a*3.5;
scanf("%d",&b);
scanf("%d",&x);
if(a<100)
{
    printf("consumed units is %d and bill is %d",a,c);
}
else if(200<a<500)
{
    printf("consumed units is %d and bill is %d",a,v);
}
else if(100<a<200)
{
    printf("consumed units is %d and bill is %d",a,b);
}
return 0;
}


