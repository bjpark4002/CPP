#include <iostream>


int tem = 100;
namespace wow{
    void func(){
        int tem =10;
        std::cout<< "local tem = "<<tem<<std::endl;
        std::cout<< "global tem = "<<::tem<<std::endl;
    }
}

int main(){

    wow::func();
}

/*
namespace AAA{

    namespace BBB{
        namespace CCC{
            int num = 1;
            void func(){
                std::cout<<" num = "<<num<<std::endl;
            }
        }
    }
}


namespace ABC = AAA::BBB::CCC;

int main(){
    ABC::func();
}
*/

/*
 #include "1.h"
int main(){
    A::func();
    B::func();
}
*/
/*
inline int max(int a, int b){
    if (a>b)    return a;
    else return b;
}

inline int some_function(int a){
    if (a == 0 ) return 1;
    else if (a ==1) return 3;
    else return a * 2;
}
inline int SQUARE(int x){
    return x*x;
}

int main(int argc, char **argv){
    // printf("which is greater among 3 and 2? = %d\n",max(3,2));
    // printf("some_function(%d) %d\n",2,some_function(2));

    std::cout<<SQUARE(5)<<std::endl;
    std::cout<<SQUARE(12)<<std::endl;

    return 0;
}
*/

/*

void swap(int * a, int * b){
    int t= *a;
    *a = *b;
    *b = t;

}

void swap(char * a , char * b){
    char t=*a;
    *a = *b;
    *b = t;

}

void swap(double * a , double * b){

    double t= *a;
    *a = *b;
    *b = t;
}

int main(void)
{

    int num1 = 20, num2 = 30;
    swap(&num1, &num2);
    std::cout<<num1<< ' ' <<num2<<std::endl;

    char ch1='A', ch2= 'Z';
    swap(&ch1, &ch2);
    std::cout<<ch1<<' '<<ch2<<std::endl;

    double dbl1=1.111, dbl2=5.555;
    swap(&dbl1, &dbl2);
    std::cout<<dbl1<<' ' <<dbl2<<std::endl;
    return 0;
 
}
*/