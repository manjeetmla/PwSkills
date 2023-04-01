#include<iostream>
using namespace std;

/* Given an integer array containing n elements. Find the element in the array for which all the elements
to its left are smaller than it and all the elements to the right of it are larger than it. Here 1<n<101. */

int main(){
    int n, arr[101], max[101], min[101];
    cout<<"enter the no. of elements:-";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    int ele=-1, big=arr[0], small=arr[n-1];
    for(int i=0; i<n; i++){
        if(arr[i]>big){
            big=arr[i];
        }
        max[i]=big;
    }
    for(int i=n-1; i>=0; i--){
        if(arr[i]<small){
            small=arr[i];
        }
        min[i]=small;
    }
    for(int i=0; i<n; i++){
        if(i!=0 && i!=n-1){
            if(min[i]==max[i]){
                ele=min[i];
                break;
            }
        }
    }
    cout<<endl;
    cout<<ele<<endl;
    
}

