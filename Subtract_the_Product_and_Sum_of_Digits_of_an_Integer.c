#include<stdio.h>
int main()
{
    int n,i,sum=0,pro=1,r;
    scanf("%d",&n);
    while(n!=0)
    {
        i=n%10;
        n=n/10;
        sum+=i;
        pro=pro*i;
    }
    if(sum+pro!=0)
    {
        r=pro-sum;
    }
    printf("%d",r);
}