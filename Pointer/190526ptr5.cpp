#include<iostream>
int main(){
    int * p_dynamic{new int{77}};
    std::cout<<"The value: "<<* p_dynamic<<std::endl;
    delete p_dynamic;
    p_dynamic = nullptr;


}