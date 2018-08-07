#include<stdio.h>
#include<conio.h>
int main()
{
	char s[100];
	int c=0;
	scanf("%s",&s);
	for(int i=0;s[i]!='\0';i++)
	c++;
	printf("the length of the string is %d",c);
}
