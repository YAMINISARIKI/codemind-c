#include<stdio.h>
int main()
{
    int i,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        int j,n;
        scanf("%d",&n);
        for(j=0;j<n;j++)
        {
            if(n==j*j)
           {
               printf("True");
               break;
           }
        }
        if(n!=j*j)
        {
            printf("False");
        }
        printf("
");
    }    
}