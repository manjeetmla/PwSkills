#include<iostream>
using namespace std;
int main(){
    int x ;
    cout<<"enter a no."<<endl;
    cin>> x;
    if (x<0){
        x=x*(-1);
    }
    cout<<"absolute value is :"<<x<<endl;
    return 0;



}