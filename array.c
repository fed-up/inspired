#include<stdio.h>
int main()
{
    int n, i, a[10];
    printf("enter a numbers:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the array elements are:");
    for(i=0;i<n;i++)
    {
        printf("%d",a[i]);
    }
}
