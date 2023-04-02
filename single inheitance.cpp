/* CREATE 10 CLASSES A,B,C,D,E,F,G,H,I,J WITH AT LEAST A NULL CONSTRUCTOR AND A 
PARAMETRIC CONSTRUCTOR,3 DATA MEMBERS AND FUNCTIONS WITH DIFFERENT ACCESS MODIFIERS .SPECIFY
THE ACCESS OF EACH DATA MEMBER AND FUNCTIONS IN THE PROGRAM .USE THESE CLASSES TO ILLUSTRATE 
THE CONCEPT OF SINGLE INHERTITANCE ,MULTIPLE INHERITANCE,MULTILEVEL INHERITANCE AND HYBRID 
INERITANCE.
#include<iostream>
using namespace std;
*/

//single inheritance

#include<iostream>
using namespace std;
class Parentclass{

	private:		
		int b;
	protected:		
		int c;
		
		Parentclass(){
			this-> a=0;
			this-> b=0;
			this-> c=0;
		}
		
		Parentclass(int A,int B,int C){
			a=A;
			b=B;
			c=C;
		}
		public:
		int a;	
    void setabc (int A,int B,int C)
	{
	  a=A;
	  b=B;
	  c=C;     
	}	
			
	int getabc(){
		return a,b,c;
	}	

    void display(){
    	cout<<"value of a is "<<a<<endl;
		cout<<"value of b is "<<b<<endl;
		cout<<"value of c is "<<c;
	}

	
};
class Childclass:public Parentclass{
	
	public:
		int a1;
		
		void display (){
		cout<<" the function of Parentclass is called ."<<endl;
		Parentclass::display();
	}
		
	private:	
	    int b2;
	protected :  
	    int c3;		
	

};

int main()
{
	Childclass obj;
	
	 obj.display();
   return 0;
	
}
