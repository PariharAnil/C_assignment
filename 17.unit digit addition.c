#include<stdio.h>
int main()
{
	int n,r,sum=0;
	printf("Enter the value :=");
	 scanf("%d",&n);
	 printf("%d\n",n);
	 while(n!=0)
	 {
	 	r=n%10;
	 	sum=sum+r;
	 n=	n/10;
	 }
	 printf("The unit digit add= %d",sum);
	 return 0;
}
