#include<iostream>
int main(){
    const size_t COUNT(0);
    size_t i{0};
    while(i<COUNT){
        std::cout<<i<<"hello os"<<std::endl;
        ++i;
    }
    std::cout<<"Basic"<<std::endl;
    return 0;
}