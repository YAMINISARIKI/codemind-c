#include<stdio.h>
int main()
{
	int num,pd,rem,sum=0,temp;
	scanf("%d",&num);
	temp=num;
	for(;num>0;)
	{
		rem=num%10;
		sum=(sum*10)+rem;
		num=num/10;
	}
	if(temp==sum)
	{
		printf("True");
	}
	else
	{
		printf("False");
    }
}