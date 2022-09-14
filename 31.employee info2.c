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
  struct Employee e,a,n,b,c;
 	printf("Enter the Employee detalis=\n1.id 2.name  3.age 4.adress \n\n");
 	scanf("%d %s %d  %s",&e.empid,&e.empname,&e.age,&e.address);
 	printf("Empid=%d\nEmpname=%s\nEmpage=%d\nEmpaddress=%s\n\n",e.empid,e.empname,e.age,e.address);
 	scanf("%d %s %d  %s",&a.empid,&a.empname,&a.age,&a.address);
 	printf("Empid=%d\nEmpname=%s\nEmpage=%d\nEmpaddress=%s\n\n",a.empid,a.empname,a.age,a.address);
 	scanf("%d %s %d  %s",&n.empid,&n.empname,&n.age,&n.address);
 	printf("Empid=%d\nEmpname=%s\nEmpage=%d\nEmpaddress=%s\n\n",n.empid,n.empname,n.age,n.address);
 	scanf("%d %s %d  %s",&b.empid,&b.empname,&b.age,&b.address);
 	printf("Empid=%d\nEmpname=%s\nEmpage=%d\nEmpaddress=%s\n\n",e.empid,e.empname,e.age,e.address);
 	scanf("%d %s %d  %s",&e.empid,&e.empname,&e.age,&e.address);
 	printf("Empid=%d\nEmpname=%s\nEmpage=%d\nEmpaddress=%s",e.empid,e.empname,e.age,e.address);
	 return 0;
}
