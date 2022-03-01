#include<stdio.h>
int main()
{
    int a[3],b[3],count=0,i,count1=0;
    scanf("%d%d%d",&a[0],&a[1],&a[2]);
    scanf("%d%d%d",&b[0],&b[1],&b[2]);
    for(i=0;i<3;i++)
    {
        if(a[i]>b[i])
        {
            count++;
        }
        else if(b[i]>a[i])
        {
            count1++;
        }
    }
    printf("%d %d",count,count1);
    return 0;
}