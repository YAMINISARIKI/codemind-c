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
    int m;
    scanf("%d",&m);
    int c=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==m)
        {
            c++;
        }
    }
    printf("%d",c);
}