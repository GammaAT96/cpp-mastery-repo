#include<iostream>
int main(){
    char grade{'B'};
    std::cout<<"The value of grade is: "<<grade<<std::endl;
    std::cout<<"The ASCII code of this number is: "<<static_cast<int>(grade)<<std::endl;
    return 0;
}