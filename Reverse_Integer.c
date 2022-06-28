#include<stdio.h>
int main()
{
    int n,s=0,t;
    scanf("%d",&n);
    while(n!=0)
    {
        t=n%10;
        s=s*10+t;
        n=n/10;
    }
    printf("%d",s);
}