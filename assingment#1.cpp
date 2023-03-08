#include<iostream>
using namespace std;
class Student
{
	public:
	int sapid;
	int semester;
	string name;
	float gpa;
	bool isfemale;
	//1
	Student()
	{
		sapid=1;
		semester=1;
		name="";
		gpa=0.0;
		isfemale=0;	
	}
	//2
	Student(int sapid,string name,int semester,float gpa,bool isfemale)
	{
		this->sapid=sapid;
		this->name=name;
		this->semester=semester;
		this->gpa=gpa;
		this->isfemale=isfemale;
	}
	//3
	Student(int sapid,string name)
	{
		this->sapid=sapid;
		this->name=name;
	}
	//4
	Student(int sapid,string name,float gpa)
	{
		this->sapid=sapid;
		this->name=name;
		this->gpa=gpa;
	}
	//5
	Student(int sapid,string name,bool isfemale)
	{
		this->sapid=sapid;
		this->name=name;
		this->isfemale=isfemale;
	}
	//destructor
	~Student()
	{
		cout<<"Destructor called"<<endl;
	}
};
int main()
{
    Student s1( 46,"suha",2,3.7,0);
	Student s2( 47,"Ali",2,3.2,1);
	Student s3( 48,"Safa",2,2.4,0);
	Student s4( 49,"Sam",2,2.9,0);
	cout<<"-------------------------------"<<endl;
	cout<<"Details of Student 1 : "<<endl<<"SAPID:"<<s1.sapid<<endl<<"NAME: "<<s1.name<<endl<<"SEMESTER:"<<s1.semester<<endl<<"GPA:"<<s1.gpa<<endl<<"GENDER:"<<s1.isfemale<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Details of Student 2 : "<<endl<<"SAPID:"<<s2.sapid<<endl<<"NAME: "<<s2.name<<endl;
	cout<<"--------------------------------"<<endl;
	cout<<"Details of Student 3 : "<<endl<<"SAPID:"<<s3.sapid<<endl<<"NAME: "<<s3.name<<endl<<"GPA:"<<s3.gpa<<endl;
	cout<<"---------------------------------"<<endl;
	cout<<"Details of Student 4 : "<<endl<<"SAPID:"<<s4.sapid<<endl<<"NAME: "<<s4.name<<endl<<"GENDER:"<<s4.isfemale<<endl<<endl;
	return 0;	
}
