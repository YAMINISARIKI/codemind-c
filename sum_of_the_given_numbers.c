#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        int a[2],j,k;
        for(j=0;j<2;j++)
        {
            scanf("%d",&a[j]);
        }
        k=a[0]+a[1];
        printf("%d
",k);
    }
}