// MULTILEVEL INHERITANCE 
#include<iostream>
using namespace std;

//CLASS A
class classA{
	private:
		int j;
	protected :
		int k;
	public:
	    int l;	 
	
	void setjki(int J,int K,int L){
		
		 j=J;
		 k=K;
		 l=L;
		 
	}
	
	int getjkl()
	{
		return j,k,l;
	}
	
	void display(){
		cout<<"values of jkl"<<endl;
	}
	
	};
//CLASS B
class classB
{
		private:
		int m;
	protected :
		int n;
	public:
	    int o;	 
	
	void setmno(int M,int N,int O){
		
		 m=M;
		 n=N;
		 o=O;
		 
	}
	
	int getmno()
	{
		return m,n,o;
	}
	
	void display1(){
		cout<<"values of mno"<<endl;
	}
};
//CLASS C
class classC:public classA,public classB{};

int main(){
	classC obj2;
	obj2.display(); 
	obj2.display1();         
    return 0;
}