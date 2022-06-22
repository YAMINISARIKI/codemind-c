#include<stdio.h>
int main()
{
    int T,x;
    scanf("%d",&T);
    int a[T],i;
    for(i=0;i<T;i++)
    {
        scanf("%d",&a[i]);
        x=1;
        int j;
        for(j=a[i];j>0;j--)
        {
            x=x*j;
        }
        printf("%d
",x);
    }
}