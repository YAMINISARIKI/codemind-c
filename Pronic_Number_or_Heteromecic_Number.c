#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[100],i;
    for (i=0; i<100; i++)
    {
        a[i]=i*(i+1);
    }
    int c=0;
    for (i=0; i<100; i++)
    {
        if (a[i]==n)
        {
            c=1;
            break;
        }
    }
    if (c==0)
    {
        printf("NO");
    }
    else
    {
        printf("YES");
    }
}