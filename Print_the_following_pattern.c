#include<stdio.h>
int main()
{
    int n,i,j,x=1;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=x;j<=n;j++)
        {
            printf("%d ",j);
        }
        x=i+1;
        printf("
");
    }
}