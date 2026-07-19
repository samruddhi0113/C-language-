#include<stdio.h>
#include<conio.h>
void main()
{
	char a[10];
	printf("Enter Name :");
	gets(a);
	
	strlwr(a);
	puts(a);
	
	strupr(a);
	puts(a);
	
}
