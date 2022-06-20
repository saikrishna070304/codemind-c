#include<stdio.h>
# include<math.h>
int main()
{
    long long int n;
    scanf("%lld",&n);
    int r,s,k;
    k=n;
    while(n!=0)
    {
        r=n%10;
        s++;
        n=n/10;
    }
    if(s==10 && k%int(pow(10,10))!=0)
        printf("Valid");
    else
    printf("Invalid");
    return 0;
}