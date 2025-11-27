# include <stdio.h>
int main ()
{
 int SP,CP,profit,loss;
 printf("enter value of sp ");
 scanf("%d",&SP);
 printf("enter value of cp ");
 scanf("%d",&CP);
 
  if(SP>=CP)
    {
     printf("profit=SP-CP ");
    }
  else if (CP>=SP) 
    {
     printf("Loss=CP-SP ");
    }
  else
    {
     printf("something wrong");
    }
}