#include <iostream>
using namespace std;

class First{
public:
    void MyFunc(){
        cout<<"First called\n";
    }
    virtual ~First(){
        cout<<"First Delete"<<endl;
    }

};

class Second : public First{
public:
    void MyFunc(){
        cout<<"Second called\n";
    }
    ~Second(){
        cout<<"Second Delete"<<endl;
    }
};

class Third : public Second{
public:
    void MyFunc(){
        cout<<"Third called\n";
    }
    ~Third(){
        cout<<"Third Delete"<<endl;
    }

};

int main(void){


    // Third * tptr = new Third();
    // Second * sptr=tptr;
    // First * fptr=sptr;

    // fptr->MyFunc();
    // sptr->MyFunc();
    // tptr->MyFunc();
    // delete tptr;

    First * tem = new Third();

    delete tem;

    return 0;
}