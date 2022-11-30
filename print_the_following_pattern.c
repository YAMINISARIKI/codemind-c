#include<stdio.h>
int main()
{
    int n,i,j,k,l;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=n;j>i;j--)
        {
            printf(" ");
        }
        for(l=i-1;l>=1;l--)
        {
            printf("%d",l);
        }
        for(k=0;k<i;k++)
        {
            printf("%d",k);
        }
        printf("
");
    }
}