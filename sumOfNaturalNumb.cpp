#include<iostream>
using namespace std;
// sum of n natural no.
int main(){
    int n, c=0;
    cout<<"enter the no.";
    cin>>n;
    for(int i=1; i<=n; i++){
        c=c+i;
    }
    cout<<c;
}