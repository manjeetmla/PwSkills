#include<iostream>
using namespace std;

/* Given an integer array and its size, reverse the array and print it . Here 1<size<101 */

int main(){
    int n, arr[101];
    cout<<"enter the no. of elements:-";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    cout<<endl;
    for(int i=0; i<n/2; i++){
        int temp=arr[i];
        arr[i]=arr[n-i-1];
        arr[n-i-1]= temp;
    }
     for(int i=0; i<n; i++){
        cout<<arr[i];
    }    
}    