#include<iostream>
using namespace std;

/*Given an integer array and its size, the sum of the greatest and the smallest integer present
in the array. Here 1< size <101 */

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
    int largest= arr[0];
    int smallest= arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>largest){
            largest=arr[i];
        }
        if(arr[i]<smallest){
            smallest=arr[i];
        }
    }
    cout<<"\n"<<"largest:-"<<largest<<"\n"<<"smallest:-"<<smallest;
    int sum=largest+smallest;
    cout<<"\n"<<"total sum="<<sum;
}
