#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,os=0,es=0,diff;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            es=es+a[i];
        }
        else
        {
            os=os+a[i];
        }
    }
    if(os>es)
    {
        diff=os-es;
    }
    else
    {
        diff=es-os;
    }
    printf("%d",diff);
}