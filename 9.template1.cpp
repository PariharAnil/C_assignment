#include<iostream>
using namespace std;
template<typename Anil>
class Test
{   
	Anil a,b;
	public:
	    Anil swap(Anil x,Anil y) 
	     {
	     	a=x;
	     	b=y;
	       a=a+b;
	       b=a-b;
	       a=a-b;
	       cout<<"Swap value is=\n"<<"A="<<a<<endl<<"B="<<b<<endl;	
		 }	
};
int main()
{   
    Test<int>ob;
    Test<float>obj;
     ob.swap(11,24);
     obj.swap(23.3,43.4);
     
	return 0;
}
