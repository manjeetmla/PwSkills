#include<iostream>
using namespace std;
//checking the condition a<50 and a<b
int main(){

    int a,b,c=50;
    cout<<"a:";
    cin>>a;
    cout<<"b:";
    cin>>b;
    cout<<((a<c)&&(a<b))<<endl;

    return 0;

}