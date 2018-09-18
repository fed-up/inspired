#include<stdio.h>
int main()
{
    printf("%d",rev(12));
}
int rev(int n)
{
    if(n==0)
        return 0;
    return 1+rev(n/10);
}
