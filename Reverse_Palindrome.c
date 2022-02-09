#include<stdio.h>
int palindrome(int num)
{
    int rev=0,rem;
    while(num)
    {
        rem = num%10;
        rev =rev*10+rem;
        num = num/10;
    }
    return rev;
}
int main()
{
    int m;
    scanf("%d",&m);
    do
    {
        m = m+palindrome(m);
    }while(m != palindrome(m));
    printf("%d",m);
}