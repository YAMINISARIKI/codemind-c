#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n][n],b[n][n],i,j,c[n][n],d;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            d=a[i][j]-b[i][j];
            if(d<0)
            {
                d*=-1;
            }
            c[i][j]=d;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d",c[i][j]);
            if(j<n-1)
            {
                printf(" ");
            }
        }
        printf("
");
    }
}