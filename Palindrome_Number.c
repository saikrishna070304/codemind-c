#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int r,x,sum=0;
        x=arr[i];
        while(x>0)
        {
        r=x%10;
        sum=(sum*10)+r;
        x=x/10;
        }
    if(sum==arr[i])
    {
        printf("True
");
    }
    else
    {
        printf("False
");
    }
    }
}