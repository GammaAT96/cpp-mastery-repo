#include<iostream>
int main(){
    auto v1 = 12;
    auto v2 = 13.5;
    auto result {v1+v2};
    std::cout<<"result: "<<result<<std::endl;
    std::cout<<"size of result: "<<sizeof(result)<<std::endl;
    return 0;
}