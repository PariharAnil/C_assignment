#include<stdio.h>
int main()
{
	int i,even=0,odd=0;
	  for(i=1;i<=5;i++)
	  {
	  	if(i%2==0)
	  	{
	  		even=even+i;
		  }
		  else
		  {
		  	odd=odd+i;	
		  }
	  }
	  printf("the even sum is:%d\n",even);
	   printf("the odd sum is:%d",odd);
	  
}
