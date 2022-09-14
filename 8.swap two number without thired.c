#include<stdio.h>
int main()
{
	int a=11,b=22;
	
	a=a+b; //33
	b=a-b; //11
	a=a-b; //22 
	printf("a=%d\nb=%d",a,b);
	return 0;
}
