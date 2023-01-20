#include<iostream>
using namespace std;
// sum of 1st and 2nd last digit of 5 digit number
int main(){
    int n,first,second,third,fourth,fifth,sum;
    n=12345;
    first=n/10000;
    n=n%10000;
    second=n/1000;
    n=n%1000;
    third=n/100;
    n=n%100;
    fourth=n/10;
    n=n%10;
    fifth=n;

    sum=first+fourth;
    cout<<"sum of first & fourth digit is :"<<sum<<endl;
    
    return 0;
    


}