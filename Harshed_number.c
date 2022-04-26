#include<stdio.h>
int main()
{
    int sum=0,n,temp,m;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        temp=n%10;
        sum=sum+temp;
        n=n/10;
    }
    if(m%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}