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
    for(i=2;i<n;i++)
    {
        if(a[i]==a[i-1]+a[i-2])
        {
            c=1;
        }
        else
        {
            c=0;
            break;
        }
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}