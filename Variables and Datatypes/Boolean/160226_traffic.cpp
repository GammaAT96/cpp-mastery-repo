#include<iostream>
int main(){
    bool green_light;
    std::cout<<"is the light green: "<<std::endl;

    std::cin>>green_light;
    if (green_light==1){
        std::cout<<"go"<<std::endl;
    }
    else{
        std::cout<<"stop"<<std::endl;

    
    }
}
