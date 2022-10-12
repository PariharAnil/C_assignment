#include<iostream>
using namespace std;
class Calculate
{
		public:
			 void test(int h,int b,int r)
			 {    
			     r=h*b;
			 	cout<<"Rectangle="<<r<<endl;
			 }
			 void test(int a,int e)
			 {
			 	cout<<"triangle="<<a*e/2<<endl;
			 	
			 }
			 void test(int a)
			 {
			 	cout<<"circle="<<3.14*a*a<<endl;
			 	
			 }

};

int main()
{     
	Calculate ob;
	ob.test(12,3);
	ob.test(2,6);
	ob.test(2);
	
	return 0;
}
