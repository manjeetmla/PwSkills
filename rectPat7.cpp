#include<iostream>
using namespace std;
// printing a rect
int main(){
    int r=4,c=7;
    for(int i=1; i<=r; i++){
        for(int j=1; j<=c; j++){
             if(i==1 || i==r || j==1 || j==c){
                cout<<"*";

            }
            else{
                cout<<" ";
            }
            
        }
        cout<<endl;
    }
}