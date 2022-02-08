#include<stdio.h>
int palindrome(int num)
{
    int rem,rev=0;
    while(num)
    {
        rem = num%10;
        rev = rev*10+rem;
        num = num/10;
    }
    return rev;
}
int main()
{
   int a,b,i;
   scanf("%d%d",&a,&b);
   for(i=a;i<=b;i++)
   {
   if(i == palindrome(i))
   {
       printf("%d ",i);
   }
   }
}