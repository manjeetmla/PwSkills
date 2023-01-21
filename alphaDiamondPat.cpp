#include<iostream>
using namespace std;
// printing alpha diamond pattern
int main(){
    int n=9;
    char A;
   
    for(int i=1; i<=n/2; i++){
        int a='A';
        for(int j=1; j<=((n-i)/2); j++){
            cout<<" ";
        }
        for(int k=1; k<=(2*i-1); k++){
                cout<<char(a);
                a=a+1;
        }
        cout<<endl;
    }
    int a='A';
    for(int k=1; k<=n; k++){
        cout<<char(a);
        a=a+1;
    }
    cout<<endl;
    for(int i=n/2; i>=1; i--){
        int a='A';
            for(int j=1; j<=((n-i)/2); j++){
                cout<<" ";
            }
            for(int k=(2*i-1); k>=1; k--){
                cout<<char(a);
                a=a+1;
            }   
        cout<<endl;

    }
}    