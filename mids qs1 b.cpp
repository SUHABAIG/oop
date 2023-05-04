#include <iostream>
using namespace std;

class TableofContents {
	private :
		//list <string>items ;
		public :
			TableofContents(){
				cout<<"Table of contents is shown \n ";
			}
};

class Book{
	public:
	TableofContents toc;
	//list<string>sections;
	//list<string>chapters;
	
	Book(){
		toc =TableofContents();
	}	
};
int main (){
	Book book1 =Book();
	getchar();
	return 0;
	
}