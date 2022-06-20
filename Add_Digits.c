#include<stdio.h>
int add(int n)
{
    int r,sum=0;
    while(1>0)
    {
        sum=0;
        while(n>0)
        {
            r=n%10;
            sum+=r;
            n=n/10;
        }
        if(sum>9)
        {
            n=sum;
            continue;
        }
        else
        {
            break;
        }
    }
    return sum;
}
int main()
{
    int x,res;
    scanf("%d",&x);
    res=add(x);
    printf("%d",res);
    return 0;
}