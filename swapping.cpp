#include<iostream>
using namespace std;
// swapping two numbers with the help of third variable

int main(){

    int a,b;
    cout<< "a:";
    cin>> a;
    cout<<"b:";
    cin>>b;
    
    int c;
    c=b;
    b=a;
    a=c;

    cout<<"a:"<<a<<endl;
    cout<<"b:"<<b<<endl;

    return 0;

}