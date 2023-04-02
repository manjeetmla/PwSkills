#include <iostream>
using namespace std;

/* Given a vector arr[] sorted in increasing order of n size and an integer x, find the number
of unique pairs that exist in the array whose absolute sum is exactly x. */

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
    cout<<"enter the sum of the no. to be find:- ";
    cin>>element;
    
    int j=n-1, k=0;
    for(int i=0; i<n/2; i++){
        if(arr[k]+arr[j]==element){
            a++;
        }
        else if(arr[k]+arr[j]>element){
            j--;
        }
        else if(arr[k]+arr[j]<element){
            k++;
        }
    }
    cout<<a;
}