#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n],i,j;
    for (i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }
    int sum=0,c=0;
    double avg;
    for (i=0; i<n; i++)
    {
        int count=1;
        for (j=0; j<n; j++)
        {
            if (i!=j)
            {
                if (a[i]==a[j] && a[i]!=-1)
                {
                    count++;
                    a[j]=-1;
                }
            }
        }
        if (count==a[i])
        {
            sum+=a[i];
            c++;
        }
    }
    if (c==0)
    {
        printf("-1");
    }
    else
    {
        avg=sum*1.0/c;
        printf("%.2lf",avg);
    }
}