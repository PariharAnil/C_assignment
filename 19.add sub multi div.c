#include<stdio.h>
int main()
{
	int a,b,choice;
	
	 printf("Enter the value:");
	 scanf("%d%d",&a,&b);
	 printf("a=%d\nb=%d\n",a,b);
	 printf("1.add  2.sub  3.multi  4.div \n");
	 printf("\n");
	printf(" ");
	 printf("enter the opertaion number=");
	 scanf("%d",&choice);
	 
	 switch(choice)
	 {
	 	case 1: printf("the addtion is=%d\n",a+b);
	 	break;
	 	case 2: printf("the subraction is=%d\n",a-b);
	 	break;
	 	case 3: printf("the multi is=%d\n",a*b);
	 	break;
	 	case 4: printf("the divison is=%d\n",a/b);
	 	break;
	 	default:
	 		 printf("Please right number....!");
	 		 
	 		 return 0;
	 }
	 
	 
}
