#include<iostream>
int main(){
    const unsigned int COUNT{10};
    unsigned int i{11};
    do {
        std::cout<<"["<<i<<"]\nBasic";
        ++i;

    
    }
        while(i<COUNT);
    
    return 0 ; 
}