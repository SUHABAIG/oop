/*write a c++ program 
make a class name student ,option 1 should enter students rollno,name,semester,gpa in a form of string and store it in a file .option 2 to display the record of students stored  in file in  split form using stringstream.
*/

#include<iostream>
#include<fstream>
#include<sstream>
#include<string>
using namespace std;

class Student{
private:
    string rollno;
    string name;
    string semester;
    string gpa;
public:
    Student(){
        rollno = "";
        name = "";
        semester = "";
        gpa = "";
    }
    void enterDetails(){
        cout << "Enter Student Roll No : ";
        cin >> rollno;
        cout << "Enter Student Name : ";
        cin >> name;
        cout << "Enter Student Semester : ";
        cin >> semester;
        cout << "Enter Student GPA : ";
        cin >> gpa;
    }
    void putDetailsInFile(){
        ofstream outfile;
        outfile.open("student.txt",ios::app);
        outfile << rollno << "," << name << "," << semester << "," << gpa << endl;
        outfile.close();
    }
    void readDetailsFromFile(){
        ifstream infile;
        infile.open("student.txt");
        string line;
        while(getline(infile, line)){
            stringstream linestream(line);
            string temp;
            getline(linestream, temp, ',');
            cout << "Student Roll No : " << temp << endl;
            getline(linestream, temp, ',');
            cout << "Student Name : " << temp << endl;
            getline(linestream, temp, ',');
            cout << "Student Semester : " << temp << endl;
            getline(linestream, temp, ',');
            cout << "Student GPA : " << temp << endl << endl;
        }
        infile.close();
    }
};

int main(){
	 Student S;
	int choice;
	  do
    {
    cout<<"--------STUDENT PORTAL---------\n";
    
    cout<<"  Press 1 to add details:\n ";
    cout<<" Press 2 to show details:\n ";
    cout<<" Press 3 for exit!\n ";
    cout<<" Enter choice ";
    cin>>choice;


    switch(choice)
    {
    	case 1:
    	
        S.enterDetails();
        S.putDetailsInFile();
    	break;
		case 2:
		S.readDetailsFromFile();
		break;
		case  3:
		system("cls");
		cout<<"Thank You for Using !";
		break;
		default:
		cout<<"  Enter valid number! ";		
	}

}	while(choice < 3);
return 0;
}

	
	

   