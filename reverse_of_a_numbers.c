#include<stdio.h>
int main()
{
    int n,temp,sum=0;
    scanf("%d",&n);
    while(n>0)
    {
     temp=n%10;
     sum=sum*10+temp;
     n=n/10;
    }
    printf("%d",sum);
    return 0;
}