#include<stdio.h>
int main()
{
	int i,e=0,o=0;
	printf("Enter the number:");
//     for(i=1;i<=10;i++)
//     {
//     	scanf("%d",&i);
//	 }
	 
	 for(i=1;i<=10;i++)
     {
     	if(i%2==0)
	   {   
		  e++;
		}  
		else
		{
			o++;
		}
		printf("%d",e);
		
  	 }
	 
	 
	return 0;
	
	  
}

