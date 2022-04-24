#include<stdio.h>
int main()
{
    int n,larg=0,temp=0;
    scanf("%d",&n);
    while(n>0)
    {
        temp=n%10;
        if(temp>larg)
        {
            larg=temp;
        }
        n=n/10;
    }
    printf("%d",larg);
    return 0;
}