#include<stdio.h>
int main()
{
    int x;
    scanf("%d",&x);
    if(x<0)
    {
        printf("Negative Number");
    }
    else if(x>0)
    {
        printf("Positive Number");
    }
    else
    {
        printf("invalid");
    }
    return 0;
}