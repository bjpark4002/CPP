#include <iostream>
#include <string>


using namespace std;


class Computer{

private:
    string owner;

public:

    Computer(string name): owner(name){
        cout<<"Computer constructor invoked\n";
    }
    void Calculate(){
        cout<<"Calculate";
    }
};

class Laptop : public Computer{

private:
    int battery;
public:
    Laptop(string name, int capacity): Computer(name), battery(capacity){
        cout<<"Laptop constructor invoked\n";
    }
    void Charging() {
        battery+=5;
    }
    void UseBattery() {
        battery -=1;
    }
    void MovingCal(){
        if(GetBatteryInfo()<1){
            cout<<"Please Charger \n";
            return;
        }
        cout<<"With mobility ";
        Calculate();
        UseBattery();
    }
    int GetBatteryInfo() {return battery;}
};

class Tablet : public Laptop{
private:
    string penModel;

public:
    Tablet(string name, int capacity, string pen): penModel(pen), Laptop(name,capacity){
        cout<<"Tablet constructor invoked\n";
    } 
    void WriteWithPen(string penInfo){
        if(GetBatteryInfo()<1){
            cout<<"Charge please\n";
            return;
        }
        if(penInfo != penModel){
            cout<<"Pen is not registered\n";
            return;
        }
        cout<<"Start writing \n";
        UseBattery();
    }

};

int main (void){

    Laptop one("Bumjin",5);
    Tablet two("Camila",10,"AAA");
    one.MovingCal();
    two.WriteWithPen("AAA");

    return 0;
}