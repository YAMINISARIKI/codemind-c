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
    int A,B,c=0;
    scanf("%d%d",&A,&B);
    for(i=0;i<n;i++)
    {
        if(a[i]>=A && a[i]<=B)
        {
            printf("%d ",a[i]);
            c++;
        }
    }
    if(c==0)
    {
        printf("-1");
    }
}
