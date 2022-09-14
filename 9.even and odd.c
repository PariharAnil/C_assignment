#include<stdio.h>
int main()
{
	int num;
	printf("Enter the any value:");
	scanf("%d",&num);
	
     	num=(num%2==0)?'e':'o';
     	printf("%c",num);
     	
	return 0;
}
