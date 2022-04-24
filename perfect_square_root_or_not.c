#include<stdio.h>
#include<math.h>
int main()
{
    int n,v;
    float i;
    scanf("%d",&n);
    i=sqrt(n);
    v=i;
    if(v==i)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    return 0;
}