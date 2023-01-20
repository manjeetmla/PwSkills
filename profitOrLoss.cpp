#include <iostream>
using namespace std;
// calculating profit and loss
int main(){
    int CP,SP, amt;
    cout<<"Enter cost price: ";
    cin>>CP;
    cout<<"Enter selling price: ";
    cin>>SP;
    if(SP > CP){
        amt = SP - CP; 
        cout<<"Profit = "<<amt;
    }
    else if(CP > SP){
        amt = CP - SP; 
        cout<<"Loss = "<<amt;
    }
    else{
        cout<<"No Profit No Loss."; 
    }
    return 0;
}