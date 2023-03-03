/*create a class duration in c++ that has 4 data members days ,hours ,minutes and seconds.
define a null constructor and 2 parametric constructors ,first constructor takes all the parameters
and assigns to the data members .second constructor takes duration in seconds calculates days hours and minutes from
that and sets the data members .also define 2 functions the first displays the duration in an understandable pattern
.the second function shows the total duration in seconds .
create different objects using the constructors and utilize the functions.*/

#include<iostream>
using namespace std;
class Duration
{
       
    public:
    	
    	 int days, hours, minutes, seconds;
    	// NULL CONSTRUCTOR
        Duration(){
            days = 0;
            hours = 0;
            minutes = 0;
            seconds = 0;
        }
        // CONSTRUCTOR 1
        Duration(int d, int h, int m, int s){
            days = d;
            hours = h;
            minutes = m;
            seconds = s;
        }
        //CONSTRUCTOR 2
        
        Duration(int s){
            days = s / 86400;
            s = s % 86400;
            hours = s / 3600;
            s = s % 3600;
            minutes = s / 60;
            seconds = s % 60;
        }
        void display(){
            cout<<days<<" days "<<hours<<" hours "<<minutes<<" minutes "<<seconds<<" seconds"<<endl;
        }
        int getDurationInSeconds(){
            return days * 86400 + hours * 3600 + minutes * 60 + seconds;
        }
};

int main(){
    Duration d1;
    Duration d2(3,6,7,9);
    Duration d3(3680);

    d1.display();
    cout<<"Total duration in seconds = "<<d1.getDurationInSeconds()<<endl;

    d2.display();
    cout<<"Total duration in seconds = "<<d2.getDurationInSeconds()<<endl;

    d3.display();
    cout<<"Total duration in seconds = "<<d3.getDurationInSeconds()<<endl;

    return 0;
}
