#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    if(N%3==0 && N%5!=0 && N%7!=0)
    {
        printf("Pling");
    }
    else if(N%3!=0 && N%5==0 && N%7!=0)
    {
        printf("Plang");
    }
    else if(N%3!=0 && N%5!=0 && N%7==0)
    {
        printf("Plong");
    }
    else if(N%3==0 && N%5==0 && N%7!=0)
    {
        printf("PlingPlang");
    }
    else if(N%3==0 && N%5!=0 && N%7==0)
    {
        printf("PlingPlong");
    }
    else if(N%3!=0 && N%5==0 && N%7==0)
    {
        printf("PlangPlong");
    }
    else if(N%3==0 && N%5==0 && N%7==0)
    {
        printf("PlingPlangPlong");
    }
    else
    {
        printf("%d",N);
    }
}