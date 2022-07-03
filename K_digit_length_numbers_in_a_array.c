#include<stdio.h>
int count(int n)
{
    int c=0;
    if(n==0)
    {
        return 1;
    }
    if(n<0)
    {
        n*=-1;
    }
    while(n>0)
    {
        c++;
        n/=10;
    }
    return c;
}
int main()
{
    int k,n;
    scanf("%d%d",&n,&k);
    int a[n],c1=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(count(a[i])==k)
        {
            c1++;
        }
    }
    printf("%d",c1);
}