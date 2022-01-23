#include<stdio.h>
#include<math.h>
int main()
{
    int a,n,i,x;
    scanf("%d%d",&a,&n);
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d x %d = %d
",a,i,a*i);
        }
    }
    return 0;
}