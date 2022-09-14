#include<stdio.h>
int main()
{
	int num=64728,rev=0;
	     printf("The number is :%d\n",num);
	  
	   while(num>0)
	   {
	   	  rev=(rev*10)+num%10;
	   	   num=num/10;
	   } 
	   printf("the res no is=%d",rev);

	return 0;
}
