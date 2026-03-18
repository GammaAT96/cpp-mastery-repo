#include<iostream>
int main(){
    auto big_num {2000UL};
    auto price {9.99f};
    std::cout<<"big_num: "<<big_num<<std::endl;
    std::cout<<"price: "<<price<<std::endl;
    std::cout<<"size of big_num: "<<sizeof(big_num)<<std::endl;
    std::cout<<"size of price: "<<sizeof(price)<<std::endl;
    return 0;
}