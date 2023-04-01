#include<iostream>
using namespace std;

/* Given two arrays a[] and b[] of same size.Your task is to find the minimum sum of two elements such
that they belong to different arrays and are not at the same index. Here 1<size<101 */

int main(){
    int n, a[101], b[101];
    cout<<"enter the no. of elements:-";
    cin>>n;
    
    cout<<"enter the elements for a:-";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    
    cout<<endl;
    cout<<"enter the elements for b:-";
    for(int i=0; i<n; i++){
        cin>>b[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i];
    }
    cout<<endl;
    for(int i=0; i<n; i++){
        cout<<b[i];
    }
    int p=0, small_a= a[0], small_b= b[0];
    for(int i=0; i<n; i++){
        if(a[i]<small_a){
            small_a=a[i];
            p=i;
        }
    }
    for(int j=0; j<n; j++){
        if(b[j]<small_b && j!=p){
            small_b=b[j];    
        }
    }
    cout<<endl<<"small no in a:- "<<small_a<<endl<<"small no in b:- "<<small_b<<endl;
    int sum= small_a + small_b;
    cout<<sum;
}