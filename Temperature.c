#include<stdio.h>
void main()
{
	float f,c,k;
	printf("Enter Temperature :");
	scanf("%d",&f);
	
	c=0.5/9*(f-32);
	k=c+273.15;
	printf("Celcius %.2f",c);
	printf("\nKelvin %.2f",k);
}
