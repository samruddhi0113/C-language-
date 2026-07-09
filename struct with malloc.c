#include<stdio.h>
#include<stdlib.h>
struct employee
{
	int eno;
	char ename[10];
	float salary;
};
struct employee *e;

void accept()
{
	printf("Enter Eno:");
	scanf("%d",&e->eno);
	printf("\nEnter Ename:");
	scanf(" %s",e->ename);
	printf("\nEnter Salary:");
	scanf("%f",&e->salary);
}
void display()
{
	printf("\nEmployee Number %d",e->eno);
	printf("\nEmployee Name %s",e->ename);
	printf("\nEmployee salary %f",e->salary);
}
void main()
{
	e=(struct employee *)malloc(sizeof(struct employee));
	accept();
	display();
}
