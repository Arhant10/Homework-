#include<stdio.h>
int main(){
    int i=0;
    int sum=0,som=0;
    
    do{
           
         sum+=i;
        som+=i*i;
        i++;
         printf("%d\n",i*i);
        printf("%d\n\t",i);
       
     
    }
    while(i<5);
    
    
    printf("\nsum=%d",sum+=i);
    printf("\nsum of square=%d",som+=i*i);
}
