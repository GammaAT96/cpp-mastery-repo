#include<iostream>
int main(){
    //int scores[10]; through garbage value
    int scores[10] ={}; //not through garbage vaue
    scores[0] = 10;
    scores[1] = 20;
    scores[2] = 30;
    scores[3] = 40;
    for(size_t i {0}; i<10 ; ++i){
        std::cout<< "scores: "<<scores[i]<<std::endl;
    }
}