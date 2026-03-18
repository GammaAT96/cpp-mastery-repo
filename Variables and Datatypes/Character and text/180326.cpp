#include <iostream>
int main(){
    char my_char;
    std::cout<<"Enter the lowercase: ";
    std::cin>>my_char;
    
    my_char = my_char - 32;
    std::cout<<"The uppercase version case: "<<my_char<<std::endl;
    return 0;



}