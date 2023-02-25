#include<iostream>
using namespace std;
//given to binary number, returns the greatest in decimal format.
int main(){
    int a=1001, b=0100;
    int ans1=0, ans2=0;
    int pw = 1;
    while (a > 0) {
        int unit_digit = a % 2;
        ans1 += pw * unit_digit;
        pw *= 2;
        a /= 10;
    }
    while (b > 0) {
        int unit_digit = b % 2;
        ans2 += pw * unit_digit;
        pw *= 2;
        b /= 10;
    }
    if(ans1>ans2){
        cout<<ans1;
    }
    else{
        cout<<ans2;
    }
}
