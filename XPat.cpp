#include<iostream>
using namespace std;
// X pattern
int main(){
    int n;
    cout<<"enter a no.";
    cin>>n;
    for(int i=n; i>=1; i--){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int k=(2*i-1); k>=1; k--){
            if(k==(2*i-1) || k==1){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
        
    }
    for(int i=2; i<=n; i++){
        for(int j=1; j<=(n-i); j++){
            cout<<" ";
        }
        for(int k=1; k<=(2*i-1); k++){
            if(k==1 || k==(2*i-1)){
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    } 
   

}