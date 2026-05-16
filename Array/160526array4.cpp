#include<iostream>
int main(){
    double expenses [] {12.5,4.2,8.9,15.0};
    double total {0.0};
    std::cout<<"elements in array: ";
    for (auto value : expenses){
        total += value;
        std::cout<<value<<" ";
        
        
    }
    std::cout<<"\ntotal: "<<total<<std::endl;

}