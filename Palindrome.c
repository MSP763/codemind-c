#include<stdio.h>
int main()
{
    int n,m,sum=0,temp;
    scanf("%d",&n);
    m=n;
    while(n>0)
    {
        temp=n%10;
        sum=sum*10+temp;
        n=n/10;
    }
    if(sum==m)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
}