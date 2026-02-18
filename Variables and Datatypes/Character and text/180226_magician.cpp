#include<iostream>
int main(){
    char letter {'a'};
    letter = static_cast<int>(letter) + 3;
    std::cout<<"Letter: "<<letter<<std::endl;
    std::cout<<"Ascii letter: "<<static_cast<int>(letter)<<std::endl;
    return 0;
}