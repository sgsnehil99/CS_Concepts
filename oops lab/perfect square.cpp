#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
	int i,j,x,s;
	printf("enter the value of the i and j");
	scanf("%d",&i);
	scanf("%d",&j);
	x=i*1100+j*11;
	printf("%d",x);
	s=sqrt(x);
	if((s*s)==x)
	printf("the no is a perfect square");
	else
	printf("the no is not a perfect square");
}
