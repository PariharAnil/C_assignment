#include<stdio.h>
struct Employee
{
	int empid;
	char empname[50];
	int age;	
	char address[100];	
};
int main()
{ 
  struct Employee e;
 	printf("Enter the Employee detalis=\n1.id 2.name  3.age 4.adress \n\n");
 	scanf("%d %s %d  %s",&e.empid,&e.empname,&e.age,&e.address);
 	printf("Empid=%d\nEmpname=%s\nEmpage=%d\nEmpaddress=%s",e.empid,e.empname,e.age,e.address);
	 return 0;
}
