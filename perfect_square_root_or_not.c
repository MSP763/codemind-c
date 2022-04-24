#include<stdio.h>
#include<math.h>
int main()
{
    int i,n;
    float m;
    scanf("%d",&n);
    m=sqrt((double)n);
    i=m;
    if(m==i)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
    
}