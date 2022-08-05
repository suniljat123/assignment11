#include<stdio.h>
int fact(int );
int combination(int ,int );
int main()
{
    int n,i,j,k;
    printf("Enter number of rows=");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int k=1,r=0;
        for(j=1;j<=n*2-1;j++)
        {
            if((j>=n+1-i)&&j<=n-1+i&&k)
            {
                printf("%d",combination(i-1,r));
                k=0;
                r++;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}
int combination(int n,int r)
{
    return(fact(n)/(fact(r)*fact(n-r)));
}
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    return (n*fact(n-1));
}
