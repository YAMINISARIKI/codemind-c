#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],i,index=0;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            index=i;
        }
    }
    printf("%d",index);
}