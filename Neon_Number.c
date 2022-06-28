#include<stdio.h>
#include<math.h>
int main()
{
    int n,s,t,sum=0;
    scanf("%d",&n);
    s=n*n;
    while(s>0)
    {
        t=s%10;
        sum=sum+t;
        s=s/10;
    }
    if(sum==n)
    {
        printf("Neon Number");
        
    }
    else
    {
        printf("Not Neon Number");
    }
}