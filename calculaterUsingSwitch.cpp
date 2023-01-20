#include<iostream>
using namespace std;
int main(){
    char op;
    float num1,num2;
    cout<<"enter an operator(=,-,*,/):";
    cin>>op;
    cout<<"enter two numbers:"<<endl;
    cin>>num1>>num2;
    switch(op){
        case '+':
          cout<<num1<<"+"<<num2<<"="<<num1+num2;
          break;
        case '-':
          cout<<num1<<"-"<<num2<<"="<<num1-num2;
          break;
        case '*':
          cout<<num1<<"*"<<num2<<"="<<num1*num2;
          break;
        case '/':
          cout<<num1<<"/"<<num2<<"="<<num1/num2;
          break;
        default:
          cout<<"error!the operator is not correct";
        break;    
    }
    return 0;


}