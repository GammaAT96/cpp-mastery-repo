#include<iostream>
#include<string>
using namespace std;
int main(){
string n = "Chabhi";
int start=0;
int end =n.length()-1;
while(start < end){
char temp = n[start];
n[start] = n[end];
n[end] = temp;
start++;
end--;
}
cout<<"Reveresed name: "<<n<<endl;
return 0;
}