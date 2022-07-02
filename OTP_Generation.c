#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int i,a[100],c=0;
    for(i=0;i<100 && n!=0;i++)
    {
        a[i]=n%10;
        n/=10;
        c=c+1;
    }
    for(i=c-1;i>=0;i--)
    {
        if(a[i]%2!=0)
        {
            printf("%d",a[i]*a[i]);
        }
    }
}