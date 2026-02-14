#include <iostream>
#include<string>
using namespace std;
int main(){
    string a ="Anant";
    int start= 0;
    int end =a.length()-1;
    while(start<end){
        int temp=a[start];
        a[start]=a[end];
        a[end]=temp;
        start++;
        end--;
    }
    cout<<"Reveresed num: "<<a<<endl;
    return 0;

}