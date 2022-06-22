#include<stdio.h>
int main()
{
    int a,rem,sum=0,rem1,sum1=0,b=0;
    scanf("%d",&a);
    while(a!=0)
    {
        rem=a%10;
        sum=sum*10+rem;
        a=a/10;
    }
    while(sum!=0)
    {
        rem1=sum%10;
        sum=sum/10;
        if(b<1)
        {
            if(rem1==6)
            {
                rem1=9;
                b=1;
            }
        }
        sum1=sum1*10+rem1;
    }
    printf("%d",sum1);
}