#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int d,p,r,i,sum=0;
    d=n;
    while(n!=0)
    {
        r=n%10;
        p=1;
        for(i=1;i<=r;i++)
        {
            p=p*i;
        }
        sum=sum+p;
        n=n/10;
    }
    if(d==sum)
    printf("The number %d is a strong number",d);
    else
    printf("The number %d is not a strong number",d);
    return 0;
}