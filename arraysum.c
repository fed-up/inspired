#include<stdio.h>
int main()
{
    int a[20], i, n, sum=0;
    printf("enter the number of elements:");
    scanf("%d",&n);
    printf("enter the elements");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("product of array element are:");
    for(i=1;i<=n;i++)
    {
       sum=sum*a[i];
    }
    for(i=0;i<n;i++)
    printf("sum=%d",sum);
    return 0;
}
