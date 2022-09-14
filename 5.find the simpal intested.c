#include<stdio.h>
int main()
{
	int a,p,r,t;
	  printf("Enter the value:");
	   scanf("%d",&p);
	   printf("The principal amout:%d\n",p);
	   scanf("%d",&r);
	   printf("The rate of interest:%d\n",r);
	   scanf("%d",&t);
	   printf("The total time:%d\n",t);
	   
	   a=p*r*t/100;
	   
	   printf("The Simpal Intrested find=%d",a);
	   return 0;
}
