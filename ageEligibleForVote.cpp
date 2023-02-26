#include<iostream>
using namespace std;

//Given the age of a person, A function to check if the person is eligible to vote or not.

void vote(int a){
    if(a>=18){
        cout<<"yes, eligilble for vote.";
    }
    else{
        cout<<"not eligible for vote.";
    }
}
int main(){
    int age;
    cout<<"enter age:-";
    cin>>age;
    vote(age);
    return 0;
}