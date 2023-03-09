#include<iostream>
using namespace std;

class Student{
	private :
		int sapid;
		string name;
		float cgpa;
		int semester;
		bool isfemale;
	
	public:
	void setsapid(int s)
		{
			sapid=s;
		}
		
			
    void setname(string n)
		{
		name=n;
	    }
		

	void setcgpa(float g)
		{
			cgpa=g;
		}
		
	void setsemester(int se )
		{
			semester=se;
		}
			
	void setisfemale(bool f)
	{
	        isfemale=f;	
	}	
			
	int getsapid(){
		return sapid;
	}	
	

	string getname(){
		return name;
	}
		
		
	float getcgpa(){
		return cgpa;
	}
	
		
	int getsemester(){
		return semester;
	}
			
	bool getisfemale(){
		return isfemale;
	}
};

int main()
{
	Student s1;
	s1.setsapid(45109);
	s1.setname("suha");
	s1.setcgpa(3.72);
	s1.setsemester(2);
	
	cout<<"SAPID: "<<s1.getsapid()<<endl;
	cout<<"NAME: "<<s1.getname()<<endl;
	cout<<"CGPA: "<<s1.getcgpa()<<endl;
	cout<<"SEMESTER: "<<s1.getsemester()<<endl;
}