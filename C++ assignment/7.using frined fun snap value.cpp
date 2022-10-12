#include<iostream>
using namespace std;
class A
{    
   private:
  		 	int a=11,b=20;
   
	public:
			friend void swap(A ob);
		
};
void swap(A ob)
 	{
 		ob.a=ob.a+ob.b; //10+20=30
 		ob.b=ob.a-ob.b; // 20-30=10
 		ob.a=ob.a-ob.b;  //30-10=20;
 	
 		cout<<"Swap value a="<<ob.a<<endl;
		cout<<"Swap value b="<<ob.b;
 	}


int main()
{   
    A ob;
    swap(ob);
	return 0;
}
