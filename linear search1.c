#include<stdio.h>
struct student
{
	int sno;
	char sname[10];
	float per;
}a[20];

void main()
{
	accept();
}
void accept()
{
	int i,n;
	printf("Enter Limit:");
	scanf("%d",&n);
	
	printf("\nEnter information :");
	for(i=0; i<n; i++)
	{
		printf("\nEnter sno:");
		scanf("%d",&a[i].sno);
		printf("\nEnter sname:");
		scanf("%s",a[i].sname);
		printf("\nEnter percentage:");
		scanf("%f",&a[i].per);
	}
	
	search(n);
}
void search(int n)
{
	int i,roll_no;
	printf("\nEnter Roll_no to search:");
	scanf("%d",&roll_no);
	
	for(i=0; i<n; i++)
	{
		if(roll_no==a[i].sno)
		{
			printf("\nSname %s",a[i].sname);
			printf("\nPersentage %f",a[i].per);
			break;
		}
	}
	if(i==n)
	   printf("Student information is not found");
}
