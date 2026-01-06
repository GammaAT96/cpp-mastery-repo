#include <iostream>
int addnumber(int first_param,int second_param){
    int result = first_param + second_param;
    return result;
}

int multiply(int first_param,int second_param){
    int result = first_param * second_param;
    return result; 

}

int main(){
    int first_number(23);
    int second_number(34);
    std::cout<<"first number: "<<first_number<<std::endl;
    std::cout<<"second number: "<<second_number<<std::endl;
    int sum = first_number+second_number;
    std::cout<<"sum: "<<sum<<std::endl;
    sum = addnumber(31,89);
    std::cout<<"sum: "<<sum<<std::endl;
    sum = addnumber(67,87);
    std::cout<<"sum: "<<sum<<std::endl;
    int product = multiply(34,87);
    std::cout<<"Pruduct: "<<product<<std::endl;
    return 0;
  

}