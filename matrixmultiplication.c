//matrix multiplication
#include<stdio.h>
int main(){
    int m,n,m1,n1,m2,n2;
    printf("enter the A matrix limit:");
    scanf("%d%d",&m1,&n1);
    printf("enter the B matrix limit:");
    scanf("%d%d",&m2,&n2);
    int a[m1][n1];
    int b[m2][n2];
    if(m1!=n2)
    {
        printf("matrix multiplication not possible");
        }else{
        printf("enter A matrix elements:");}
        int i,j,k;
        for(i=0;i<m1;i++)
        {
            for(j=0;j<n1;j++)
            scanf("%d",&a[i][j]);
        }
        printf("enter B matrix elements:");
        for(i=0;i<m2;i++)
        {
            for(j=0;j<n2;j++)
            scanf("%d",b[i][j]);
        }
        int c[m1][n1];
        for(i=0;i,i<m;i++){
            for(j=0;j<n;j++)
        {
            c[i][j]=0;
            for(k=0;k<m;k++)
            {
            c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
        }}}
        printf("resultant matrix:");
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            printf("%d\t",c[i][j]);
        }
        printf("%d\t",c[i][j]);
        printf("\n");
        return 0;}
