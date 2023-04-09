/*You have to create a simulation of Cricket. As a first step you have to develop the Classes for Players. There are 4 types of Players (Batsman, Bowler, Wicket Keeper and All-Rounder). All the Players have some common attributes like their Jersey Number, Name, Array of 3 Rankings (ODI, Test, T20). A Part from that there are separate attributes for each of them
Bowlers (Bowling style(Fast ,Spin), Average Speed, Total Wickets, Bowling Average, Strike Rate)
Batsman (Batting style (Left, Right), Batting No, Total Score, Batting Average, Strike Rate)
Wicket Keeper (Batting Style (Left, Right), Total Score, Total Catches, Total Stumps)
All Rounder (Inherits the Properties of Both Batsman and Bowler)
They have some common functions like Getters and Setters of common attributes and
 there are also some common attributes
Bowlers(Bowl, Change Side)
Batsmen(Hit the Ball, Run)
Keeper(Catch the Ball, Do Stumping)
Allrounder (Inherit Functions of Batsman and Bowler)
Create 3 Objects of each class and call all the functions.
Try creating Object of Parent class using Child Constructor and vice versa using Variables and Pointers.
*/

#include<iostream>
using namespace std;

//PLAYER
class Player{
	
		public:
			
		int jersy_no;
		string name;
	    int arr[3];
	    
	    //NULL CONSTRUCTOR
	    Player(){
	    	this->jersy_no=0;
	    	this->name=" ";
	    	this->arr[3]=0 0 0;
		}
	  
		//PARAMETRIC CONSTRUCTOR
		 Player(int jersy_no,string name ){
	    	this ->jersy_no=jersy_no;
	    	this->name=name;
	    	this->arr[3]=0 0 0;
		 
	    
	    //FUNCTION FOR RANKING 
        int getRanking() {
		cout<<"enter the ranking in a form ODI T20 TEST: "<<endl;
		for(int i=0;i<3;i++){
	    	cin>>arr[i];
		}
		cout<<"ODI ="<<arr[0]<<endl;
		cout<<"T20 ="<<arr[1]<<endl;
		cout<<"TEST ="<<arr[2]<<endl;
	    return arr[0],arr[1],arr[2];
		}
};

//BATS MAN
class BatsMan : public Player{
{
	
	string BattingStyle;
	int BattingNo;
	int TotalScore;
	float BattingAverage;
	float StrikeRate;
	public:
	
	 BatsMan()
	    {
	    	this->jersy_no=0;
	    	this->name=" ";
	    	this->arr[3]=0 0 0;
	    	this->BattingStyle=" ";
	    	this->TotalScore=0;
	    	this->BattingStyle=" ";
	    	this->BattingAverage=0.0;
	    	this->StrikeRate=0.0;
		}
		
	//PARAMETRIC CONSTRUCTOR 
	 BatsMan()
	    {
	    	this ->jersy_no=jersy_no;
	    	this->name=name;
	    	this->arr[3]=0 0 0;
	    	this->BattingStyle=BattingStyle;
	    	this->TotalScore=TotalScore;
	    	this->BattingStyle=BattingStyle;
	    	this->BattingAverage=BattingStyle;
	    	this->StrikeRate=StrikeRate;
		}
		
		//FUNCTION FOR BATSMAN
		//Batsmen(Hit the Ball, Run)
		void Hitball(){
		cout<<"The ball is hit by the batsman"<<endl;	
		}
		int getRun(){
		int run;
		cout<<"He made";
		if 	(run==0)
		cout<<" 0 Runs";
		else if (run==1)
		cout<<"He made 1 Run";
		else if (run==2)
		cout<<"He made 2 Runs";
		else if (run==3)
		cout<<"He made 3 Runs";
		else if (run==4)
		cout<<"He made 4 Runs";
		else if (run==6)
		cout<<"He made 6 Runs";
		}		
};

//BOWLER
class Bowler:public Player{
	
    public:
    	string BowlingStyle;
    	float AverageSpeed;
    	int TotalWickets;
    	float BowlingAverage;
    	float Strike_Rate;
    
    //NULL CONSTRUCTOR
	    Bowler(){
	    	this->jersy_no=0;
	    	this->name=" ";
	    	this->arr[3]=0 0 0;
	    	this->BowlingStyle=" ";
	    	this->AverageSpeed=0.0;
	    	this->TotalWickets=0;
	    	this->BowlingAverage=0.0;
	    	this->Strike_Rate=0.0;
		}
		
	//PARAMETRIC CONSTRUCTOR 
	    Bowler(){
	    	this->jersy_no=jersy_no;
	    	this->name=name;
	    	this->arr[3]=0 0 0;
	    	this->BowlingStyle=BowlingStyle;
	    	this->AverageSpeed=AverageSpeed;
	    	this->TotalWickets=TotalWickets;
	    	this->BowlingAverage=BowlingAverage;
	    	this->Strike_Rate=Strike_Rate;
		}	    	
};

//WICKET KEEPER
class WicketKeeper:public Player{
	public:
		
	string Batting_Style;
	int TotalScore;
	int TotalCatches;
	int TotalStumps;
	
	//NULL CONSTRUCTOR 
	WicketKeeper(){
	    	this->jersy_no=0;
	    	this->name=" ";
	    	this->arr[3]=0 0 0;
	    	this->Batting_Style=" ";
	    	this->TotalScore=0;
	    	this->TotalCatches=0;
	    	this->TotalStumps=0;	
		}
	
	//PARAMETRIC CONSTRUCTOR
	WicketKeeper(){
	    	this->jersy_no=jersy_no;
	    	this->name=name;
	    	this->arr[3]=0 0 0;
	    	this->Batting_Style=Batting_Style;
	    	this->TotalScore=TotalScore;
	    	this->TotalCatches=TotalCatches;
	    	this->TotalStumps=TotalStumps;	
		}
		
		void catchball(){
			cout<<"CATCH THE BALL "<<endl;
		}	
		void doStumping(){
			cout<<"No of stumps "<<endl;
		}
};
//ALL ROUNDER
class AllRounder:public Player,public BatsMan,public Bowler{	
	//All Rounder (Inherits the Properties of Both Batsman and Bowler)	
	BatsMan::Hitball;
	BatsMan::getRun;
	Bowler::Bowl;
	Bowler::ChangeSide;
};
/*
Create 3 Objects of each class and call all the functions.
Try creating Object of Parent class using Child Constructor and vice versa using Variables and Pointers.
*/
//MAIN BODY
int main(){
Player p1;
BatsMan bt;
Bowler b;

p1(12344,"Naseem Shah");
bt.getRun();
bt.HitBall();
b.catchball();
}