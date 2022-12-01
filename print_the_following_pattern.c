#include<stdio.h>
int main()
{
    int n,i,j,x;
    scanf("%d",&n);
    x=65+n-1;
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("%c ",x);
        }
        printf("
");
        x=x-1;
    }
}