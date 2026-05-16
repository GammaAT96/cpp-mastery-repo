#include<iostream>
int main(){
    int lock_combo[3]{10,20,30};
    for(int i{0};i<=3;++i){
        std::cout<<"index: "<<i<<": "<<lock_combo[i]<<std::endl;
    }
}