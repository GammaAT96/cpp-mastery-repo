#include <iostream>
#include<iomanip>
int main(){
    float number1{1.12345678901234567890f};
    double number2{1.122345678901234567890};
    long double number3 {1.12345678901234567890L};
    std::cout<<"size of float: "<<sizeof(float)<<std::endl;
    std::cout<<"size of double: "<<sizeof(double)<<std::endl;
    std::cout<<"size of long double: "<<sizeof(long double)<<std::endl;
    std::cout<<std::setprecision(20);
    std::cout<<"number1: "<<number1<<std::endl;
    std::cout<<"number2: "<<number2<<std::endl;
    std::cout<<"number3: "<<number3<<std::endl;

    return 0;


}
