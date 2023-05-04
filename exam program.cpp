//write a c++ program 
//you have to develope a game that has mutiple characters .these characters share some common properties like id ,name , maximum power and strength .there are other properties  as well that they have their own like doremon has properties like a  list of names gadgets and the name of partner , benten has the watch name ,a list of names powers and totak charge of the watch .there are also some common actions  that they can perform like walk ,jump, and eat . doremon  can show gadgets ,launch attack and fly .benten can perform like rotate watch ,fight and drive .implement the game using inheritance in c++.

#include <iostream>
using namespace std;
#include <string>


//parent class
class Character
{
    private:
    int id;
    string name;
    int maximumPower;
    int strength;
    
public:
    Character(int i,string n, int mp, int s)
    {
        id = i;
        name = n;
        maximumPower = mp;
        strength = s;
    }
    void printInfo()
    {
        cout << "Id: " << id << std::endl;
        cout << "Name: " << name << std::endl;
        cout << "Maximum Power: " << maximumPower << std::endl;
        cout << "Strength: " << strength << std::endl;
    }
    void walk()
    {
        cout << name << " is walking" << std::endl;
    }
    void jump()
    {
        cout << name << " is jumping" << std::endl;
    }
    void eat()
    {
        cout << name << " is eating" << std::endl;
    }
};

//derived class
class Doremon : public Character
{
private:
    string *gadgets;
    int numGadgets;
    string partner;
    
public:
    Doremon(int i, string n, int mp, int s, string *g, int ng, string p) : Character(i,n,mp,s)
    {
        gadgets = g;
        numGadgets = ng;
        partner = p;
    }
    void showGadgets()
    {
        cout << "Gadgets of Doremon:" << std::endl;
        for(int i=0; i<numGadgets; i++)
        {
            cout << gadgets[i] << endl;
        }
    }
    void launchAttack()
    {
        cout << "Doremon is launching an attack!" << endl;
    }
    void fly()
    {
        cout << "Doremon is flying!" << endl;
    }
};

//derived class
class Benten : public Character
{
private:
    string watchName;
    string *powers;
    int numPowers;
    int totalCharge;
    
public:
    Benten(int i, std::string n, int mp, int s, string wn, string *p, int np, int tc) : Character(i,n,mp,s)
    {
        watchName = wn;
        powers = p;
        numPowers = np;
        totalCharge = tc;
    }
    void rotateWatch()
    {
        cout << "Benten is rotating her watch!" << endl;
    }
    void fight()
    {
        cout << "Benten is fighting!" << endl;
    }
    void drive()
    {
        cout << "Benten is driving!" <<endl;
    }
};

int main()
{
    string doremonGadgets[] = {"Anywhere Door", "Time Machine", "Big Light"};
    string bentenPowers[] = {"Time Control", "Transformation", "Hypnosis"};
    
    Doremon d(1, "Doremon", 1000, 1000, doremonGadgets, 3, "Nobita");
    Benten b(2, "Benten", 2000, 2000, "Cosmic Watch", bentenPowers, 3, 100);
    
    d.printInfo();
    d.walk();
    d.jump();
    d.eat();
    d.showGadgets();
    d.launchAttack();
    d.fly();
    
    cout << endl;
    
    b.printInfo();
    b.walk();
    b.jump();
    b.eat();
    b.rotateWatch();
    b.fight();
    b.drive();
    
    return 0;
}