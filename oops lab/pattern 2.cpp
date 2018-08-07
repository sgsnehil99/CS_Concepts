#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,k,x;
	for(i=1;i<=5;i++)
	{
		x=i;
		x=(x*2)-1;
		for(j=5;j>i;j--)
		printf("- ");
		for(k=1;k<=x;k++)
		printf("*");
		printf("\n");
	}
}
	
