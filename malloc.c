#include<stdio.h>
#include<stdlib.h>
void main()
{
	int n,i,j,cnt,sum=0,*p,a[50];
	float avg;
	
	printf("Enter Number :");
	scanf("%d",&n);
	
	printf("Enter array element :");
	for(i=0; i<n; i++)
	{
		scanf("%d",&a[i]);
	}
	cnt=0;
	for(i=0; i<n; i++)
	{
		if(a[i]!=0)
		{
			cnt=cnt+1;
		}
	}
	
	p=(int*)malloc(cnt*sizeof(int));
	j=0;
	for(i=0; i<n; i++)
	{
		if(a[i]!=0)
		{
			p[j]=a[i];
			j=j+1;
		}
	}
	for(i=0; i<cnt; i++)
	{
		sum=sum+p[i];
	}
	if(cnt>0)
	{
		avg=sum/cnt;
	}
	else
	{
		avg=0;
	}
	printf("\nNon-Zero element :");
	for(i=0; i<cnt; i++)
	{
		printf("%d",p[i]);
	}
	printf("\nSum =%d",sum);
	printf("\nAverage =%d:",avg);
	free(p);
	
}
