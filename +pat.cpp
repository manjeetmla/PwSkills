#include<iostream>
using namespace std;
// + pattern
int main(){
    int n=7;
    for(int i=1; i<=n; i++){
        
        if(i==(n+1)/2){
            for(int j=1; j<=n; j++){
                cout<<"*";
            }
            cout<<endl;
        }
        else{
            for(int k=1; k<=n/2; k++){
                cout<<" ";
            }
            for(int m=1; m<=n%2; m++){
            cout<<"*";
            }
            cout<<endl;
        }
        
        
    }
}