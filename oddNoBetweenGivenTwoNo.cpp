#include<iostream>
using namespace std;

//Given two numbers a and b, A program using functions to print all the odd numbers between them.
 
void odd_no(int no1, int no2){
    for(int i=no1; i<=no2; i++){
        if(i%2 !=0){
            cout<<i<<endl;
        }
    }
}
int main(){
    int a,b;
    cout<<"enter no.1:-";
    cin>>a;
    cout<<"enter no.2:-";
    cin>>b;
    odd_no(a,b);
    return 0;
} 