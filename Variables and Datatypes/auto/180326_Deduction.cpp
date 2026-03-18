#include <iostream>
int main(){
    auto balance{1000};
    balance += 500;
    balance  -= 15;
    balance *= 2;
    std::cout<<"Final balance: "<<balance<<std::endl;
    return 0;
}