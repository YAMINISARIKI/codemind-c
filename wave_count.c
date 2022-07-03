#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int c=0;
    int d=a[0]-a[1];
    if(d<0)
    {
        for(i=0;i<n-1;i+=2)
        {
            if(a[i+1]>a[i])
            {
                c=1;
            }
            else
            {
                c=0;
                break;
            }
        }
    }
    else
    {
        for(i=0;i<n-1;i+=2)
        {
            if(a[i+1]<a[i])
            {
                c=2;
            }
            else
            {
                c=0;
                break;
            }
        }
    }
    if(c==1)
    {
        int co=0;
        for(i=1;i<n-1;i+=2)
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1])
            {
                co++;
            }
        }
        printf("%d",co);
    }
    else if(c==2)
    {
        int co=0;
        for(i=1;i<n-1;i+=2)
        {
            if(a[i]>a[i-1]&&a[i]>a[i+1])
            {
                co++;
            }
        }
        printf("%d",co);
    }
    else
    {
        printf("-1");
    }
}