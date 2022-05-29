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
    int min=10000;
    scanf("%d%d",&A,&B);
    for(i=0;i<n;i++)
    {
        if(a[i]<A || a[i]>B)
        {
            if(a[i]<min)
            {
                min=a[i];
                c=1;
            }
        }
    }
    if(c==1)
    {
        printf("%d",min);
    }
    else
    {
        printf("-1");
    }
}