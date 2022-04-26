#include<stdio.h>
int main()
{
    int arr[100],n,i,a,b;
    scanf("%d",&n);
    a=0;
    b=1;
    arr[0]=a;
    arr[1]=b;
    for(i=2;i<n;i++)
    {
        arr[i]=arr[i-2]+arr[i-1];
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}