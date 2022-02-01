#include<stdio.h>
int main()
{
    int s;
    scanf("%d",&s);
    int a[s],i,sum=0;
    scanf("%d",&a[s]);
    for(i=1;i<s;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=s;i++)
    {
        sum=sum+a[i];
    }
    printf("%d",sum);
}