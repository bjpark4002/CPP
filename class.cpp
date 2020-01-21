#include <iostream>



class SimpleClass{

private:
    int a;
    int b;
    int c;

public:
    void InitMembers(int aa = 10 , int bb = 20 , int cc = 30){
        a = aa;
        b = bb;
        c = cc;

    }
    void ShowState(){
        std::cout<<"a = "<<a<<std::endl;
        std::cout<<"b = "<<b<<std::endl;
        std::cout<<"c = "<<c<<std::endl;
    }


};

int main (void){

    std::cout<<" Test "<<std::endl;

    SimpleClass * ob = new SimpleClass;

    ob->InitMembers(1,2);
    ob->ShowState();

}