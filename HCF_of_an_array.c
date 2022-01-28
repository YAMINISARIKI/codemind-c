#include<stdio.h>
int main()
{
    int size,i;
    scanf("%d",&size);
    int arr[size],j=1,gcd;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    gcd=arr[0];
    while(j<size)
    {
        if(arr[j]%gcd==0)
        {
           j++; 
        }
        else
        {
            gcd=arr[j]%gcd;
            i++;
        }
    }
    printf("%d",gcd);
}