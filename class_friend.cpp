#include <iostream>


class GIRL{
    
    int num2;
    friend class BOY;

public:
    GIRL(int b):num2(b){
        std::cout<<" GIRL constructor invoked "<<std::endl;

    }

};

class BOY{

    int num;

    // friend class GIRL;
public:

    BOY(int a) : num(a)
    {
        std::cout<<" BOY constructor invoked "<<std::endl;
    }

    void ShowStatus(GIRL &frn){
        std::cout<<" BOY : "<<num<<" GIRL : "<<frn.num2<<std::endl;
    }

};


int main(void){

    BOY boy(185);

    GIRL girl(163);
    boy.ShowStatus(girl);






}