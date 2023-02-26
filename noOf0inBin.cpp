#include<iostream>
using namespace std;

/*Given a natural number, find the number of 0’s in the binary representation of that number.
note:- don't count the preceding zero. for eg.:- 001001 has 2 zeros as the first two zeros from
left are preceding zeros.*/

int main(){
    int n;
    cout<<"enter a no.:-";
    cin >> n;
    int ans = 0;
    int pw = 1;
    while (n > 0) {
        int p_digit = n % 2;
        if(p_digit==0){
            ans +=1;
        }
        pw *= 10;
        n /= 2;
    }
    cout << ans << endl;
}
