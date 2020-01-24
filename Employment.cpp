#include <iostream>
#include <string>

using namespace std;

class Employee{
private:
    string name;
public:
    Employee(string name) : name(name){
        cout<<"Employee constructor invoked\n";
    }
    void GetName() const{
        cout<<"name: "<<name<<endl;
    }
};

class PermanentWorker : public Employee{
private:
    int salary;

public:
    PermanentWorker(string name, int money): Employee(name), salary(money){
        cout<<"PermanentWorker constructor invoked\n";
    }
    int GetSalary() const{
        return salary;
    }
    void ShowSalaryInfo() const{
        GetName();
        cout<<"Salary : "<<salary<<endl;
    }
};

class EmployeeHandler{
private:
    Employee* empList[50];
    int empNum;
public:
    EmployeeHandler() :empNum(0){}
    void AddEmployee(Employee * emp){
        empList[empNum++]=emp;
    }
    void ShowAllSalaryInfo() const{
        
        // for(int i=0; i<empNum; i++){
        //     empList[i]->ShowSalaryInfo();
        // }
    }
    void ShowTotalSalary() const{
        // int sum 0;
        // for(int i = 0 ; i < empNum; i ++){
        //     sum+= empList[i]->GetSalary();
        // }
        // cout<<"Salary sum : "<<sum<<endl;
    }

    ~EmployeeHandler(){
        for(int i=0 ; i < empNum; i++){
            delete empList[i];
        }
    }

};

int main(void){
    EmployeeHandler manager;

    manager.AddEmployee(new PermanentWorker("Bumjin",60000));



    return 0;
}
