#include<iostream>
using namespace std;

/* Given an array containing n distinct integers in the range [0,n] (inclusive of both 0 and n).
Find and return the only number of the range that is not present in the array. Here 1<n<101. */

int main(){
    int n, arr[101],original=0,sum=0, missing;
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
    for(int i=0; i<n; i++){
        sum+=arr[i];
    }
    for(int j=0; j<=n; j++){
        original+=j;
    }
    missing=original-sum;
    cout<<"the missing number is :-  "<<missing;
}