#include<iostream>
int main(){
    int number {45};
    int *p_number{& number};
    std::cout<<"The memory address: "<<p_number<<std::endl;
    int number1 {56};
    *p_number = number1;
    std::cout<<"The memory adress: "<<p_number<<std::endl;
    int number3 {100};
    int *p_number3{& number};
    std::cout<<"The memory is: "<<p_number3<<std::endl;



}