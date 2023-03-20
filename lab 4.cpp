

#include<iostream>
using namespace std;

class Elevator 
{
    int maxload;
    int currentfloor;
    string model;
    int id;
    bool activestatus;
    bool validity;
public:
    Elevator(int maxload, int currentfloor, string model, int id, bool activestatus, bool validity)
    {
        this->maxload = maxload;
        this->currentfloor = currentfloor;
        this->model = model;
        this->id = id;
        this->activestatus = activestatus;
        this->validity = validity;
    }
    ~Elevator()
    {
        cout<<"Elevator destroyed";
    }
    void setMaxLoad(int maxload) 
    {
        this->maxload = maxload;
    }
    int getMaxLoad()
    {
        return maxload;
    }
    void setCurrentFloor(int currentfloor)
    {
        this->currentfloor = currentfloor;
    }
    int getCurrentFloor() 
    {
        return currentfloor;
    }
    void setModel(string model) 
    {
        this->model = model;
    }
    string getModel()
    {
        return model;
    }
    void setId(int id) 
    {
        this->id = id;
    }
    int getId() 
    {
        return id;
    }
    void setActiveStatus(bool activestatus) 
    {
        this->activestatus = activestatus;
    }
    bool getActiveStatus() 
    {
        return activestatus;
    }
    void setValidity(bool validity) 
    {
        this->validity = validity;
    }
    bool getValidity()
    {
        return validity;
    }
    void goUp() 
    {
        currentfloor++;
    }
    void goDown() 
    {
        currentfloor--;
    }
    void openGate() 
    {
        cout<<"Gate opened";
    }
    void closeGate() 
    {
        cout<<"Gate closed";
    }
    void displayCurrentLocation() 
    {
        cout<<"Current Floor: "<<currentfloor;
    }
};

int main() 
{
    Elevator elevator(20, 0, "Elevator A", 123, true, true);
    elevator.goUp();
    elevator.openGate();
    elevator.displayCurrentLocation();
    return 0;
}