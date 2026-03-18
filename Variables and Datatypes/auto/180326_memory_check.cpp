#include <iostream>
int main(){
    auto balance{1000};
    balance += 500;
    balance -= 15;
    balance *= 2;
    std::cout<<"Final Output: "<<balance <<std::endl;
    std::cout<<"Memory used: "<<sizeof(balance)<<std::endl;
    return 0;

}