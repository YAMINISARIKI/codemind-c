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
    int sum=0,A,B;
    scanf("%d%d",&A,&B);
    for(i=0;i<n;i++)
    {
        if(a[i]>=A &&a[i]<=B)
        {
            sum+=a[i];
        }
    }
    printf("%d",sum);
}
