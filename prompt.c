#include<stdio.h>
#include<conio.h>
void main()
{
	char str[40];
	clrscr();

	printf("$ ");
	gets(str);
	printf("%s", str);

	getch();
}
