#include<stdio.h>
int main()
{
    int n,f=0,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
     if(i*i==n)
     {
         f=1;
         break;
     }
    }
    if(f==1)
    {
        printf("True",n);
    }
    else
    {
        printf("False",n);
    }
}