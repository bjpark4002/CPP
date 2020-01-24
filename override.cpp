#include <iostream>
using namespace std;

class First{
public:
    void MyFunc(){
        cout<<"First called\n";
    }

};

class Second : public First{
public:
    void MyFunc(){
        cout<<"Second called\n";
    }

};

class Third : public Second{
public:
    void MyFunc(){
        cout<<"Third called\n";
    }


};

int main(void){


    Third * tptr = new Third();
    Second * sptr=tptr;
    First * fptr=sptr;

    fptr->MyFunc();
    sptr->MyFunc();
    tptr->MyFunc();
    delete tptr;


    return 0;
}