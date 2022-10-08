#include<stdio.h>
int count(int n)
{
    if(n==1)
    {
        return 1;
    }
    else if(n==2)
    {
        return 2;
    }
    else if(n==3)
    {
        return 4;
    }
    else
    {
        return count(n-1)+count(n-2)+count(n-3);
    }
}
int main()
{
    int n,x;
    scanf("%d",&n);
    x=count(n);
    printf("%d",x);
}