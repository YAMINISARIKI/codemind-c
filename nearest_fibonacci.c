#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,sum,x,y,i;
    for(i=1;i<=n;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        if(sum<n)
        {
            x=sum;
        }
        else
        {
            y=sum;
            break;
        }
    }
    if(abs(n-x)<abs(y-n))
    {
        printf("%d",x);
    }
    else if(abs(n-x)==abs(y-n))
    {
        printf("%d %d",x,y);
    }
    else
    {
        printf("%d",y);
    }
}