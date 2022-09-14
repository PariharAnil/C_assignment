#include<stdio.h>
int main()
{
	int i,size,a[30];
	int even=0,odd=0;
	   
	   printf("Enter the array value:");
	   scanf("%d",&size);
	   
	   for(i=0;i<size;i++)
	   {
	   	scanf("%d",&a[i]);
	   }
	   for(i=0;i<size;i++)
	   {
	   	 printf("Element is :%d\n",a[i]);
	   }
	     for(i=0;i<size;i++)
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
		 
		 printf("The total even number is=%d",even);
		 printf("The total odd number is=%d",odd);
		 
		 return 0;
}
