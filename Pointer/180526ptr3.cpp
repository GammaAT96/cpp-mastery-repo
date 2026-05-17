#include<iostream>
int main(){
    int * p_number{nullptr};
    double * p_fraction {nullptr};
    std::cout<<"The memory of int: "<<sizeof(p_number)<<std::endl;
    std::cout<<"The memory of double:  "<<sizeof(p_fraction)<<std::endl;
}