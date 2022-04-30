#include<stdio.h>
#include<math.h>
int main()
{
   int x,y,m,p,mo;
   scanf("%d%d%d",&x,&y,&m);
   p=pow(x,y);
   mo=p%m;
   printf("%d",mo);
}