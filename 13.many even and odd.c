#include<stdio.h>
int main()
{
	int i,even=0,odd=0;
	    
	   printf("Enter the number:");
	   
	   for(i=1;i<=5;i++)
	   {
	   	if(i%2==0)
	   	{
	   		even++;
		   }
		   else
		   {
		   	odd++;
		   }
	   }
	   printf("the even number is :%d\n",even);
	    printf("the odd number is :%d",odd);
	return 0;
	
}
