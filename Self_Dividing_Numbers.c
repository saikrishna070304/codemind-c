#include<stdio.h>
int is_dividing(int a)
{
    int i,c=0,k=0,s=a;
   
    int h=a,r=0;
    while(a!=0)
    {
        k++;
        a=a/10;
    }
    while(s!=0)
    {
        r=s%10;
        if(r!=0)
        {
            if(h%r==0)
            c++;
        }
        s=s/10;
    }
    if (c==k)
    return 1;
    return 0;
}
int main()
{
    int n,m,i;
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        int g=i;
        if (is_dividing(i)==1)
        {
            printf("%d ",g);
        }
    }
    return 0;
}