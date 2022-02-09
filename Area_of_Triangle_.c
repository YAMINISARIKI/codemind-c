#include<stdio.h>
#include<math.h>
int main()
{
    float s,a,b,c,A,m;
    scanf("%f%f%f",&a,&b,&c);
    s = (a+b+c)/2;
    m = s*(s-a)*(s-b)*(s-c);
    A = sqrt(m);
    printf("%.2f",A);
    return 0;
}