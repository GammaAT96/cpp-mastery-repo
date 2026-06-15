#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> vec;
    int n;
    cout<<"n: ";
    cin>>n;
    for(int i{};i<n;i++){
        int x;
        cin>>x;
        vec.push_back(x);
        
    }
    cout<<vec.front()<<endl;
        cout<<vec.back()<<endl;

}