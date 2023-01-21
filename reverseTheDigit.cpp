#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter a no.:";
    cin>>n;
    int ans=0;
    while(n>0){
        int remainder = n%10;
        ans = ans*10+remainder;
        n/=10;
    }
    cout<<ans<<endl;

}