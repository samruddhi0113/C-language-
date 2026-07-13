#include<stdio.h>
 int search(int a[],int key,int n)
 {
 	int i,cnt=0;
 	
 	for(i=0; i<n; i++)
 	{
 		if(a[i]==key)
 		{
 			cnt++;
		 }
	 }
	 return cnt;
 }
 void main()
 {
 	int i,n,key,ans;
 	printf("Enter Limit:");
 	scanf("%d",&n);
 	int a[n];
 	
 	printf("\nEnter element:");
 	for(i=0; i<n; i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("\nEnter key to searchc:");
	 scanf("%d",&key);
	 ans=search(a,key,n);
	 printf("occurances of a key %d",ans);
 }
