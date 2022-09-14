#include<stdio.h>
int fun(int num)
{    
    if(num>1)
    {
    	return num*fun(num-1);
	}
    
}
int main()
{
	fun(5);
	printf("%d",fun(5));
	   return 0;
}
