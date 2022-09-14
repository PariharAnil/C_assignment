#include<stdio.h>
int main()
{
	int r,c,a=1;
	 for(r=1;r<=6;r++)
	 {
	 	for(c=1;c<=r;c++)
	 	{
	 		printf("%d ",a++);
		 }
	     printf("\n");
	 }
}
