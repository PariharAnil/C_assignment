#include<stdio.h>
int rec(int num,int first,int last)
{
	scanf("%d",&num);
	last=num%10;
	printf("The last number is=%d\n",last);
	while(num>10)
	{
		num=num/10;
	}
	printf("The frist value is=%d\n",num);
	printf("The frist and last value is=%d",num+last);
	
}

int main()
{   
    int num1,a,b;
    printf("Enter the value:=");
    rec(num1,a,b);
	return 0;
}
