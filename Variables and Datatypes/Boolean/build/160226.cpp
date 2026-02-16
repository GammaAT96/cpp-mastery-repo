#include<iostream>
int main(){
    int x = -5;
    bool check = x;
    std::cout<<std::boolalpha;
    std::cout<<check<<std::endl;
    std::cout<<"is check equals to x: "<<(x==check)<<std::endl;
    std::cout<<sizeof(check)<<std::endl;
}