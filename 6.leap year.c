#include<stdio.h>
int main()
{
	int leap;
	 printf("Enter the any year :");
	 scanf("%d",&leap);
	  {
	  	if(leap%400==0 || leap%4==0&&leap%100!=0)
    	{
	  		printf("This is leap year");
		  }
//		  else if(leap%400==0)
//		  {
//		  	printf("This is a leap year ");
//		  }
		  else
		  {
		  	printf("this is not a leap year");
		  }
	  }
}
