#include<iostream>
using namespace std;
class A
{
	public:
		int a,b;
		A()           //constructor....
		{
			cout<<"Enter the value="<<endl;
			cout<<"Addition"<<endl;
			cin>>a>>b;
			cout<<"The addition="<<a+b<<endl;
			cout<<"subtraction"<<endl;
			cin>>a>>b;
			cout<<"The subtraction="<<a-b<<endl;
			cout<<"multiplaction"<<endl;
			cin>>a>>b;
			cout<<"The multiplaction="<<a*b<<endl;
			cout<<"Divison"<<endl;
			cin>>a>>b;
			cout<<"The Divison="<<a/b<<endl;
		}

	
};
int main()
{
	A ob;
	return 0;
}
