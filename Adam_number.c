#include<stdio.h>
int rev(int n)
{
    int sum=0,rem;
    while(n>0)
    {
        rem=n%10;
        sum=sum*10+rem;
        n=n/10;
    }
    return sum;
}
int main()
{
    int x;
    scanf("%d",&x);
    int y=rev(x);
    int c=x*x,d=y*y;
    if(c==rev(d))
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}