#include <iostream>
#include <string>

/*int main(){
    std::cout<<"Hello C++"<<std::endl;
    int age(23);
    std::cout<<"age: "<<age<<std::endl;
    std::cerr<<"Error message : Something is wrong"<<std::endl;
    std::clog<<"log message : Something happend" << std::endl;*/
int main(){
    std::string name;
    std::cout<<"enter your name: ";
    std::cin>>name;
    std::string user_age;
    std::cout<<"enter your age: ";
    std::cin>>user_age;
   
    std::cout<<"Your name is: "<<name<<" and your age is: "<<user_age<<std::endl;
    return 0;
}