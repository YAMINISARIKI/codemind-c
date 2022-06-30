#include<stdio.h>
int main()
{
    int n,j;
    scanf("%d",&n);
    for(j=0;j<n;j++)
    {
        long long int a,b,i,c=0;
        scanf("%lld %lld",&a,&b);
        for(i=0;i<b;i++)
        {
            if(i*i%b==a)
            {
                printf("%lld
",i);
                c=1;
                break;
            }
        }
        if(c==0)
        {
            printf("-1
");
        }
    }
}