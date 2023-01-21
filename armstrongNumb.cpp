#include<iostream>
using namespace std;
/* armstrong of a number b/w 100 to 500
a 3 digit no. is called a armstrong number if the sum of
the cube of its digit is equal to the no. itself */
int main(){
    int a,b,c,d,t;
    for(int i=100; i<=500; i++){
        t=i;
        a= t/100;
        t= t%100;
        b= t/10;
        t= t%10;
        c= t;
        d= ((a*a*a) + (b*b*b) + (c*c*c));
        if(d==i){
            cout<<d<<endl;
        }
        else{
            continue;
        }
        
    }
}