# include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,r;
    while(n!=0)
    {
        r=n%10;
        printf("%d",r);
        n=n/10;
    }
    return 0;
}