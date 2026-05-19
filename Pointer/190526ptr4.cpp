#include<iostream>
int main (){
    int score{100};
    int * p_score{& score};
    * p_score = 200;
    std::cout<<"The memory of element score: "<<p_score<<std::endl;
    std::cout<<"The score of element score: "<<score<<std::endl;

    
    
    
}