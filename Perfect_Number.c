#include<stdio.h>
int main()
{
    int i,d=0,n,c;
    scanf("%d",&n);
    c=n;
    for(i=1;i<=n/2;i++)
    {
        if(n%i==0)
        {
            d+=i;
        }
    }
    if(d==c)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}