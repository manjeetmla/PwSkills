#include<iostream>
using namespace std;
// grade of students

int main(){

    int a,b,g;
    cout<<"total strenght of class:";
    cin>>a;
    cout<<"total boys:";
    cin>>b;
    g=(a-b);
    cout<<"total girls:"<<g<<endl;
    cout<<"total girls recived grade A:"<<(g*20/100)<<endl;
    
    return 0;

}