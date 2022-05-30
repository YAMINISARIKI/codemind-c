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
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int k,c=0;
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        if(prime(a[i])==1 && a[i]<=k)
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}