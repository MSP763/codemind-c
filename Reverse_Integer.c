#include<stdio.h>
int main()
{
    int i,sum=0,temp;
    scanf("%d",&i);
    while(i!=0)
    {
        temp=i%10;
        sum=sum*10+temp;
        i=i/10;
    }
    printf("%d",sum);
    return 0;
}