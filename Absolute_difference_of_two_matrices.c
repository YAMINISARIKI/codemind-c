#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100][100],b[100][100],c[100][100],k,i,j,l,sum=0;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(k=0;k<n;k++)
    {
        for(l=0;l<n;l++)
        {
            scanf("%d",&b[k][l]);
        }
    }
    for(i=0,k=0;i<n,k<n;i++,k++)
    {
        for(j=0,l=0;j<n,l<n;j++,l++)
        {
            c[i][j]+=abs(a[i][j]-b[k][l]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1;j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("%d
",c[i][j]);
    }
}