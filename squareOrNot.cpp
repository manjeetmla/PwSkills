#include <iostream>
using namespace std;
// checking it is square or not
int main(){
    int length,breadth;
    cout<<"Enter length: "<<endl;
    cin>>length;
    cout<<"Enter breadth: "<<endl;
    cin>>breadth;

    if(length==breadth){
        cout<<"It is a square"<<endl;
    }
    else{
        cout<<"It is a rectangle"<<endl;
    }

    return 0;
}