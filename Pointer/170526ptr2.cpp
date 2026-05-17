#include<iostream>
int main(){
 const char name[] {"Anant"};
 const char *p_name  { name};
 std::cout<<"The memory address is: "<<(void*)p_name<<std::endl;

}