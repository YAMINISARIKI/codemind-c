#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n],m=0,i;
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2!=0)
        {
            m=arr[i];
        }
    }
    printf("%d",m);
}