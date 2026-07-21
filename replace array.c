#include<stdio.h>
void main()
{
	int i,n,num,number;
	printf("Enter array size :");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter element :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\nEnter to search element :");
	scanf("%d",&num);
	printf("\nEnter to replace element :");
	scanf("%d",&number);
	
	replace(a,n,num,number);
}
void replace(int a[],int n, int num,int number)
{
	int i;
	
	for(i=0; i<n; i++)
	{
		if(a[i]==num)
		{
			a[i]=number;
		}
	}
	display(a,n);
}
void display(int a[],int n)
{
	int i;
	printf("\nDisplay replace array :");
	for(i=0; i<n; i++)
	{
		printf(" %d",a[i]);
	}
}
