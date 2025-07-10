#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// this Function give the time complexity of O(n)
// and space complexity of O(1)
void primeNumber(int n){
    int counter = 0; // Counter to check if the number is prime
    for (int i = 1; i <= n; i++){
        if(n % i == 0){
            counter++; // Incrementing a counter for each divisor found
        }
    }
    if (counter == 2) {
        cout << n << " is a prime number." << endl;
    } else {
        cout << n << " is not a prime number." << endl;
    }
}

//this Function give the time complexity of O(sqrt(n))
// and space complexity of O(1)
void primeNumberOptimized(int n) {
    if (n <= 1) {
        cout << n << " is not a prime number." << endl;
        return;
    }
    for (int i = 2; i <= sqrt(n); i++){
        if(n % i == 0){
            cout << n << " is not a prime number." << endl;
            return;
        }
    }
    cout << n << " is a prime number." << endl;
}




int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    // primeNumber(n);
    primeNumberOptimized(n);
    cout << endl;
    return 0;
}   