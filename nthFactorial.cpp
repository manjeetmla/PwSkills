#include <iostream>
using namespace std;
int main(){
    int n;
    cout<<"enetr a no. whose factorial u want:";
    cin>>n;
    int fact=1;
    for (int i=1; i<=n; i++){
        fact*=i;
    }
    cout<<fact<<'\n';
         

}