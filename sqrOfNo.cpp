#include<iostream>
using namespace std;
//a function to print squares of the first n natural numbers.
void square(int a){
    for(int i=1; i<=a; i++){
        int sqr= (i*i);
        cout<<sqr<<endl;
    }
}
int main(){
    int no;
    cout<<"enter a no.:-";
    cin>>no;
    square(no);
    return 0;
}