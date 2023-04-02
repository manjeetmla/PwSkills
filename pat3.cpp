#include <iostream>
using namespace std;

/* Given a vector arr[] sorted in increasing order of n size and an integer x, find if there exists
a pair in the array whose absolute difference is exactly x. */

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
    cout<<"enter the subtracted no. to be find:- ";
    cin>>element;
    
    int j=n-1, k=0;
    for(int i=0; i<=n/2; i++){
        if(arr[j]-arr[k]==element){
            a=1;
            break;
        }
        else if(arr[j]-arr[k]>element){
            k++;
        }
        else if(arr[j]-arr[k]<element){
            j--;
        }
    }
    cout<<a;
}