//multiple inheritance
#include<iostream>
using namespace std;

//class 1

class ParentclassA{

	private:		
		int d;
	protected:		
		int e;
		
		ParentclassA(){
			this-> d=0;
			this-> e=0;
			this-> f=0;
		}
		
		ParentclassA(int D,int E,int F){
			d=D;
			e=E;
			f=F;
		}
		public:
		int f;	
    void setdef (int D,int E,int F)
	{
	        d=D;
			e=E;
			f=F;   
	}	
			
	int getdef(){
		return d,e,f;
	}	

    void display(){
    	cout<<"value of d is "<<d<<endl;
		cout<<"value of e is "<<e<<endl;
		cout<<"value of f is "<<f<<endl;
		cout<<"------------------------"<<endl;
	}

	
};

//class 2

class ParentclassB{
	
	private:
	    int h;
	protected:
	    int i;	    
	public:
		int g;
	
	ParentclassB(){
			this-> g=0;
			this-> h=0;
			this-> i=0;
		}
		
	ParentclassB(int G,int H,int I){
			g=G;
			h=H;
			i=I;
		}	
		  
	 void setghi (int G,int H,int I)
	{
	        g=G;
			h=H;
			i=I;   
	}	
			
	int getghi(){
		return g,h,i;
	}	

    void display1(){
    	cout<<"value of g is "<<g<<endl;
		cout<<"value of h is "<<h<<endl;
		cout<<"value of i is "<<i<<endl;
	}

	    
	
};

//child class 

class ChildClass:public ParentclassA,public ParentclassB{
	
	public:

		void Display (){
		cout<<" The function of Parentclass is called ."<<endl;
		ParentclassA::display();
		ParentclassB::display1();
	}
		
};

int main()
{
	ChildClass obj1;
	
	obj1.setdef(5,6,7);
	obj1.setghi(9,10,11);
	
	 obj1.Display();
	 cout<<endl;
   return 0;
	
}