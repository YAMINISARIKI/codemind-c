#include<stdio.h>
int main()
{
    int n,rem,sum=0;
    scanf("%d",&n);
    while(n!=0)
    {
        rem=n%10;
        n=n/10;
        sum=sum*10+rem;
    }
    printf("%d",sum);
}