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
    int A,B;
    int c=0;
    int max=0;
    scanf("%d%d",&A,&B);
    for(i=0;i<n;i++)
    {
        if(a[i]>=A && a[i]<=B)
        {
            if(a[i]>max)
            {
                max=a[i];
                c=1;
            }
        }
    }
    if(c==1)
    {
        printf("%d",max);
    }
    else
    {
        printf("-1");
    }
}