#include <iostream>
#include <cstring>
using namespace std;

namespace CAR_CONST
{
    enum{
        ID_LEN20, MAX_SPD=200, FUEL_STEP=2, ACC_STEP=10, BRK_STEP=10
    };
}

class Car{
private:
    char gamerID[CAR_CONST::ID_LEN20];
    int fuelGauge;
    int curSpeed;
public:
    // Car(char* ID, int Fuel){
    //     strcpy(gamerID, ID);
    //     fuelGauge=Fuel;
    //     curSpeed=0;
    // }
    
    void InitMembers(char * ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();

};

void Car::InitMembers(char *ID, int fuel){
    strcpy(gamerID, ID);
    fuelGauge=fuel;
    curSpeed=0;
}

void Car::ShowCarState(){
    cout<<"ID            : "<<gamerID<<endl;
    cout<<"Fuel          : "<<fuelGauge<<endl;
    cout<<"Current Speed : "<<curSpeed<<endl;
}

void Car::Accel(){
    if(fuelGauge<=0)
        return;
    else
        fuelGauge -=CAR_CONST::FUEL_STEP;

    if((curSpeed+CAR_CONST::ACC_STEP)>=CAR_CONST::MAX_SPD){
        curSpeed=CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed+=CAR_CONST::ACC_STEP;
}

void Car::Break(){
    if(curSpeed<CAR_CONST::BRK_STEP){
        curSpeed = 0;
        return;
    }
    curSpeed-=CAR_CONST::BRK_STEP;
}

int main(void){
    Car run99;
    char * tem = "Bumjin";
    run99.InitMembers(tem,1000);
    run99.Accel();
    run99.Accel();
    run99.Accel();
    run99.ShowCarState();

    run99.Break();
    run99.ShowCarState();

    return 0;       

}




/*

    study more about enum, namespace
    When you declare and implement functions in class/struct, it works like inline
    if you only declare and implement outside of class/struct, it won't work as inline
    so if you want to want them to work lke inline, you have to put keyword inline in front of definition of function
    ex:

    inline void Car::Accel() { .... }
    inline void Car::Break() { .... }


*/

/*
// #define ID_LEN 20
// #define MAX_SPD 200
// #define FUEL_STEP 2
// #define ACC_STEP 10
// #define BRK_STEP 10

struct Car
{
    enum    //macro could go here 
    {
        #define ID_LEN 20
        #define MAX_SPD 200
        #define FUEL_STEP 2
        #define ACC_STEP 10
        #define BRK_STEP 10
    };
    char gamerID[ID_LEN];
    int fuelGauge;
    int curSpeed;
};


void ShowCarState(const Car &car){
    std::cout<<"Ownership ID  : "<<car.gamerID<<std::endl;
    std::cout<<"Fuel Level    : "<<car.fuelGauge<<"%"<<std::endl;
    std::cout<<"Current speed : "<<car.curSpeed<<"km/s"<<std::endl<<std::endl;
}

void Accel(Car &car){

}

*/