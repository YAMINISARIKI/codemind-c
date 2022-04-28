#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,count=0;
    for(i=0;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]+1<=n)
        {
            count++;
        }
    }
    if(count==n)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}