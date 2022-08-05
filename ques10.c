#include<stdio.h>
int fact(int );
int permutation(int ,int );
int main()
{
    int k=0;
    k=fact(1)/1+fact(2)/2+fact(3)/3+fact(4)/4+fact(5)/5;
    printf("Sum of 1! /1+2!/2+3!/3+4!/4+5!/5=%d",k);
    return 0;
}
int fact(int n)
{
    if(n==1||n==0)
        return 1;
    return n*fact(n-1);
}
