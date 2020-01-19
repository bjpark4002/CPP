#include <iostream>
#include <string.h>
#include <stdlib.h>

class Simple{
    public:
        Simple(){
            std::cout<<"I'm Simple constructor"<<std::endl;
        }
};

int main(void){
    std::cout<<"case 1: ";
    Simple *sp1 = new Simple;

    std::cout<<"case 2: ";
    Simple *sp2 = (Simple*)malloc(sizeof(Simple)*1);

    std::cout<<std::endl<<"end of main"<<std::endl;
    delete sp1;
    free(sp2);
}

/*
using namespace std;

char * MakeStrAdr(int len){
    // char * str=(char*)malloc(sizeof(char)*len);

    char * str = new char[len];
    return str;
}

int main(void){
    char * str = MakeStrAdr(20);   
    strcpy(str, "I am so happy~");
    cout<<str<<endl;
    // free(str);
    delete []str;
    return 0;

}

*/