#include<stdio.h>
int prime(int a)
{
    int i,c=0;
    for(i=1;i<=a;i++)
    {
        if(a%i==0)
        {
            c+=1;
        }
    }
    if(c==2)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,i,j,x,y,g=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        for(j=2;j<=n;j++)
        {
            if(i*j==n)
            {
                x=prime(i);
                y=prime(j);
                if(x==1 && y==1)
                {
                    printf("%d %d",i,j);
                    g=1;
                    break;
                }
            }
        }
        if(g==1)
        {
            break;
        }
    }
    if(g==0)
    {
        printf("-1");
    }
}