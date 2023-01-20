#include <iostream>
using namespace std;
// skipping number if it is negative
int main(){
    int number;
    cout << "Enter an integer: ";
    cin >> number;
    if (number > 0){
        cout << "You entered a positive integer: " << number << endl;
    }
    else{
        cout << "The number is negative and skipped ";
    }
    return 0;
}