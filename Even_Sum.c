#include<stdio.h>
int main()
{
    int arr[100],i,n,sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]%2==0)
        {
            sum=sum+arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}