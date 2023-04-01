#include <iostream>
using namespace std;

//Given an integer array(arr) and its size(n), print the count of odd and even integers present in the array.

int main(){
    int n, even=0, odd=0;
    int arr[101];
    cout<<"enter the no. of elements:-";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    for(int i=0; i<n; i++){
        if(arr[i]%2==0){
            even+=1;
        }
        else{
            odd+=1;
        }
    }
    cout<<"even no.:- "<<even<<"\n"<<"odd no.:-"<<odd<<"\n";
}