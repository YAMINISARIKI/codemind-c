#include<stdio.h>
int main()
{
  int a,b,i=1;
  scanf("%d%d",&a,&b);
  for(;i;i++)
  {
      if((b*i)%a==0)
      {
          printf("%d",b*i);
          break;
      }
  }
  return 0;
}