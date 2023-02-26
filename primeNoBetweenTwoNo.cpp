#include<iostream>
using namespace std;

//Given two numbers a and b, A program to print all the prime numbers present between a and b.

int prime_no(int no1, int no2){
    for(int i=no1; i<=no2; i++){
        char q= true;
        if(i==1){
            q= false;
        }
        for(int j=2; j<i; j++){
            if(i%j==0){
                q= false;
            }
        }
        if(q==true){
            cout<<i<<" ";
        }    
    }

}
int main(){
    int a,b;
    cout<<"enter a no.1:-";
    cin>>a;
    cout<<"enter no.2:-";
    cin>>b;
    prime_no(a,b);
    return 0;
}