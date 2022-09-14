#include<stdio.h>
int main()
{
	int week;
	  printf("1.sunday 2.monday 3.tuesday 4.Wednesday 5.Thursday 6.friday 7.saturday\n\n");
	printf("Enter the any value:");
	 scanf("%d",&week);
	 
	 switch(week)
	 
	 	{
	 		case 1: printf("\nsunday");
	 		break;
	 		case 2: printf("\nMonday");
	 		break;
	 		case 3: printf("\nTuesday");
	 		break;
	 		case 4: printf("\nWednesday");
	 		break;
			case 5: printf("\nThursday");
	 		break;
	 		case 6: printf("\nFriday");
	 		break;
			case 7: printf("\nsaturday");
	 		break;
	 		default:
	 			printf("enter the correct number");
	 			return 0;
	 			
		 }
}
