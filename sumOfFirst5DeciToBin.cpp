#include<iostream>
using namespace std;
// print sum of first 5 decimal no. from 1 - 5 in binary format
int main(){
    int n=0;
    int ans = 0;
    int pw = 1;
    for(int i=1; i<=5; i++){
        n+=i;
    }
    while (n > 0) {
        int parity = n % 2;
        ans += pw * parity;
        pw *= 10;
        n /= 2;
    }
    cout << ans << endl;
}
