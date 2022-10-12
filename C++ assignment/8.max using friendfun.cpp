#include<iostream>
using namespace std;
class Max
{
	int a,b;
	public:
		void getValue(int x,int y)
		{
			a=x;
			b=y;
			cout<<"The value ="<<endl<<a<<endl<<b<<endl;
		}	
		
	friend	void testaccess(Max obj);
	
};
 	void testaccess(Max obj)
 		{
 			if(obj.a>obj.b)
 			{ 
 			 	cout<<"The max value is a="<<obj.a<<endl;
 				
			 }
			 else
			 {
			 	cout<<" max value is b="<<obj.b<<endl;
			 }
 			
		 }

int main()
{   
   Max ob;
   ob.getValue(234,21);
   testaccess(ob);
	return 0;
}
