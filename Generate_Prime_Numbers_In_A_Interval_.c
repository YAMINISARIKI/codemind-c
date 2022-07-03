#include<stdio.h>
int prime(int n)
{
    int c=0,i;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
            c++;
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
    int a,b,i;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        if(prime(i)==1)
        {
            printf("%d
",i);
        }
    }
}