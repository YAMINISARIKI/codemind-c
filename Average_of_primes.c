#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
        }
    }
    if(c==2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int x;
    float ave;
    scanf("%d",&x);
    int a[x],i,c=0,sum=0;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<x;i++)
    {
        if(prime(a[i])==1)
        {
            c++;
            sum+=a[i];
        }
    }
    ave=(sum*1.0)/c;
    printf("%.2f",ave);
}