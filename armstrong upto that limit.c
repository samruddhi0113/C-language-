#include<stdio.h>
#include<stdio.h>
void main()
{
	int n;
	printf("Enter limit:");
	scanf("%d",&n);
	
	armstrong(n);
}
armstrong(int n)
{
	int num,i,sum=0,d;
	 printf("\nArmstrong number that limit %d",n); 
	for(i=0; i<n; i++)
	{
		num=i;
	    while(num>0)
		{
			d=num%10;
			sum=sum+(d*d*d);
			num=num/10;
		}
		if(i==sum)	
		{
			printf("\n\t %d",sum);
		}
	}
}
