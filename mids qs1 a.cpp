#include<iostream>
using namespace std;

class base {
	private :
		int a ;
		protected :
			int b;
			public :
				void fun (){
					cout<<"this works ";
					
				}
};
class child : public base{
	public :
		void fun1(){
			base:: fun();
			base::b=0;
		}
};
int main (){
	child c1;
	c1.fun();
}