#include<stdio.h>
int main()
{
    int n,r,sum=0,mul=1,i;
    scanf("%d",&n);
    while(n!=0)
    {
        r=n%10;
        sum+=r;
        n=n/10;
        mul=mul*r;
    }
    if(sum==mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
}