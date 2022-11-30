#include<stdio.h>
int main()
{
    int n,i,j,x=65;
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        for(j=0;j<=n-1;j++)
        {
            printf("%c ",x);
        }
        x=x+1;
        printf("
");
    }
}