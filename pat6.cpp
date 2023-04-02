#include <iostream>
using namespace std;

/* Given a vector array nums, print the count of triplets [nums[i], nums[j], nums[k]] such
that i != j, i != k, and j != k, and nums[i] + nums[j] + nums[k] == x. Where k is an integer
given by the user. */

int main(){
    int n, ele;
    int arr[50];
    cout<<"enter the no. of elements:-";
    cin>>n;
    cout<<"enter the elements:-";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"enter the no. to be find:- ";
    cin>>ele;
    for(int i=0; i<(n-1); i++){
        for(int j=0; j<n-2; j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }    
    for(int i=0; i<n; i++){
        cout<<arr[i];
    }
    int k=n-1, a=0, l=1;
    for(int i=0; i<n/2; i++){
        int sum= ele-arr[i];
        for(int j=1; j<=n-2; j++){
            if(arr[j]+arr[k]==ele){
                a++;
            }
            else if(arr[j]+arr[k]>ele){
                k--;
            }
            else if(arr[j]+arr[k]<n){
                j++;
            }
        }
    }
    cout<<endl<<a;

}