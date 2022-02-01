#include<stdio.h>
int main()
{
    int sum=0,r,n,i,a;
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        r=a%10;
        sum=sum+r;
        a=a/10;
    }
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}