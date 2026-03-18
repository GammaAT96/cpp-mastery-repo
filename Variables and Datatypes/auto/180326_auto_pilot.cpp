#include<iostream>
int main(){
    auto miles{350.5};
    auto gallons {12.0};
    auto car_name{'X'};
    auto mpg {miles/gallons};
    std::cout<<"Car_name: "<<car_name<<std::endl;
    std::cout<<"mpg: "<<mpg<<std::endl;
    std::cout<<"mpg: "<<sizeof(mpg)<<std::endl;
    return 0;


}