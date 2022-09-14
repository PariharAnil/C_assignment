#include<stdio.h>
int main()
{
	int n,last,frist;
	printf("Enter the any  value:");
	scanf("%d",&n);
	   last=n%10;
	 printf("The last value is=%d\n",last);
	 while(n>10)
	    {  
	     n=n/10;
		}
		 printf("the first value is=%d\n",n);
printf("the last and first digit add=%d",n+last);	
	
	return 0;
	
}
