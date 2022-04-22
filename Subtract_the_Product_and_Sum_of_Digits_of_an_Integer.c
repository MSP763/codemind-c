#include<stdio.h>
int main()
{
    int sum=0,prod=1,n,temp,m;
    scanf("%d",&n);
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        prod=prod*temp;
        n=n/10;
    }
    m=prod-sum;
    printf("%d",m);
    return 0;
}