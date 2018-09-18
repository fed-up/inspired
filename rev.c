#include<stdio.h>
int main()
{

    printf("%ld",rev(0));
}
int rev(long int n)
{
    if(n<=9)
        return 1;
    return 1+rev(n/10);
}
