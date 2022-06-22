#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],max=0,i;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
    }
    int x;
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
         if((a[i]+x)>=max)
         {
             printf("True ");
         }
         else
         {
             printf("False ");
         }
    }
}