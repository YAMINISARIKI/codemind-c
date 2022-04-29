#include<stdio.h>
int main()
{
    int n,sum=0,r,i,a;
    scanf("%d",&n);
    a=n;
    while(a>0)
    {
        r=a%10;
        sum+=r;
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