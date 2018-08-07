#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r;
	scanf("%d",&n);
	if(n%7==0)
	{
		printf("the round off is %d",n);
	}
	else
	{
		r=n/7;
		n=7*(r+1);
		printf("the round off is %d",n);
	}
}
