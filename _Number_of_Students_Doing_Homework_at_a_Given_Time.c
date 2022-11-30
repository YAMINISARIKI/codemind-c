#include<stdio.h>
int main()
{
    int x,y,z;
    scanf("%d",&x);
    int a[100],b[100],i,j,k,c=0;
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    scanf("%d",&y);
    for(j=0;j<x;j++)
    {
        scanf("%d",&b[j]);
    }
    scanf("%d",&z);
    for(k=0;k<x;k++)
    {
        if(k[a]<=z && k[b]>=z)
        {
            c+=1;
        }
    }
    printf("%d",c);
}