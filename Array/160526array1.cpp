#include<iostream>
int main(){
    //int scores[10]; it will give garbage value 
    int scores[]={}; //it will give 0 value instead of garbage in the array 
    std::cout<<"scores[5]: "<<scores[5]<<std::endl;
}