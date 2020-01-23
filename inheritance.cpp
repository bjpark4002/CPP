#include <iostream>
#include <string>

using namespace std;


class PermanentWorker{

private:
    std::string name;
    int salary;

public:

    PermanentWorker(std::string name, int money) : name(name), salary(money){
        std::cout<<"PermanentWorker Constructor invoked"<<std::endl;
    }
    int getSalary() const{
        return salary;
    }
    void ShowStatus() const{
        std::cout<<"Name    : "<<name<<std::endl;
        std::cout<<"Salary  : "<<salary<<std::endl;
    }
    ~PermanentWorker(){
        std::cout<<"PermanentWorker Deconstructor invoked"<<std::endl;

    }

};



class EmployeeHandler{
private:
    PermanentWorker *empList[50];
    int empNum;

public:
    EmployeeHandler() : empNum(0){
        std::cout<<" Employee handler constructor invoked"<<std::endl;
    }
    void AddEmployee(PermanentWorker * emp){
        empList[empNum++]=emp;
    }
    void ShowAllSalaryInfo() const{
        for (int i = 0 ; i < empNum; i++){
            empList[i]->ShowStatus();
        }
    }
    void ShowTotalSalary(){
        int sum = 0;
        for(int i = 0 ; i < empNum; i ++){
            sum+=empList[i]->getSalary();
        }
        std::cout<<"Total Salary : "<<sum<<std::endl;
    }

    ~EmployeeHandler(){
        for( int i=0; i < empNum; i++)
            delete empList[i];
        std::cout<<"Employee Handler Deconstructor invoked"<<std::endl;
    }
};

int main(void){

    EmployeeHandler handler;

    handler.AddEmployee(new PermanentWorker("Bumjin", 1000));
    handler.AddEmployee(new PermanentWorker("Camila",1001));

    handler.ShowAllSalaryInfo();    

    handler.ShowTotalSalary();

    return 0;
}
