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
    scanf("%d",&x);
    int a[x],i;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0,min=a[0],max=a[0],minind=0,maxind=0;
    for(i=0;i<x;i++)
    {
        if(min>a[i])
        {
            min=a[i];
            minind=i;
        }
        if(max<a[i])
        {
            max=a[i];
            maxind=i;
        }
    }
    for(i=0;i<x;i++)
    {
        if(prime(a[i])==1)
        {
            if((i>=minind && i<=maxind) || i<=minind && i>=maxind)
            {
                c++;
            }
        }
    }
    printf("%d",c);
}