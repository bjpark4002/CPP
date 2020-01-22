#include <iostream>



class SimpleTest{

private:
    int num1;
    int num2;

public:
    SimpleTest(int a, int b) :num1(a), num2(b)
    {
       std::cout<<"constructor is invoked"<<std::endl; 
    }


    explicit SimpleTest(const SimpleTest & copy) : num1(copy.num1+1), num2(copy.num2+1)
    {
        std::cout<<"--------copy constructor is invoked -------------"<<std::endl;
    }
    void showStatus(void){
        std::cout<<"num1 : "<<num1<<" num2 : "<<num2<<std::endl;
    }

};

int main(void){


    // SimpleTest *tem = new SimpleTest(10,15);
    // tem->showStatus();

    // SimpleTest *tem2 = tem;
    // // SimpleTest *tem2(tem);

    // // tem2->showStatus();



    SimpleTest a1(20,40);
    SimpleTest a2(a1);  // you can't do a2=a1 because of explicit.

    /*
    if you don't wanna copy class with ' = ', 
    you have to put key word 'explicit' in front of copy constructor.
    */

    a1.showStatus();
    a2.showStatus();



}



/*

class SimpleClass{

private:
    int a;
    int b;
    int c;

public:
    SimpleClass(int aa = 100, int bb = 200, int cc = 300)
     : a(aa), b(bb), c(cc)  //initializer.
    {
        std::cout<<"Constructor invoked"<<std::endl;
        // a = aa;
        // b = bb;
        // c = cc;
    }
    void InitMembers(int aa = 10 , int bb = 20 , int cc = 30){
        a = aa;
        b = bb;
        c = cc;

    }
    void ShowState() const {  // add const keyword to prevent modification of private variables.
 
        
        std::cout<<"a = "<<a<<std::endl;
        std::cout<<"b = "<<b<<std::endl;
        std::cout<<"c = "<<c<<std::endl;
        
    }



};

int main (void){

    std::cout<<" Test "<<std::endl;

    // 
    // SimpleClass * ob = new SimpleClass;

    // ob->InitMembers(1,2);
    // ob->ShowState();
    // 


    // 
    // SimpleClass * ob = new SimpleClass();

    // ob->ShowState();
    // 

    int a(0);
    int &aa(a);

    aa+=10;

    std::cout<< "a = "<<a<<" aa = "<<aa<<std::endl;

}

*/