#include<stdio.h>
int main()
{
    int num,rem,sum=0,mul=1;
    scanf("%d",&num);
    while(num)
    {
        rem = num%10;
        sum = sum+rem;
        mul = mul*rem;
        num = num/10;
    }
    if(sum == mul)
    {
        printf("Spy Number");
    }
    else
    {
        printf("Not Spy Number");
    }
    return 0;
}