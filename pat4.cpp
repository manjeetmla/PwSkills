#include <iostream>
using namespace std;

/* Given a vector arr[] sorted in increasing order. Return an array of squares of each
number sorted in increasing order. Where size of vector 1<size<101. */

int main(){
    int n, element, a=0;
    int arr[50];
    cout<<"enter the no. of elements:-";
    cin>>n;
    cout<<"enter the elements:-";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        arr[i]*=arr[i];
    }
     for(int i=0; i<n; i++){
        cout<<" "<<arr[i];
    }
}