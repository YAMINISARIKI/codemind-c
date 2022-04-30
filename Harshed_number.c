#include<stdio.h>
int main()
{
    int n,rem,sum=0,a,i;
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        rem=a%10;
        sum=sum+rem;
        a=a/10;
    }
    if(n%sum==0)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}