#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
using namespace std;
// this Function give the time complexity of O(n)
// and space complexity of O(1)
void printDivisors(int n){
    for (int i = 1; i <= n; i++){
        if(n % i == 0){
            cout << i << " ";
        }
    }   
}

// this Function give the time complexity of O(sqrt(n))
// and space complexity of O(sqrt(n))
void printDivisorsOptimized(int n) {
    vector<int> ls;
    for (int i = 1; i <= sqrt(n); i++){
        if(n % i == 0){
            ls.push_back(i);
            if (i != n / i) { // To avoid printing the square root twice
                ls.push_back(n / i);
            }
        }
    }
    //O(N log N) time complexity for sorting WHERE N is the number of divisors
    //O(N) space complexity for storing divisors
    sort(ls.begin(), ls.end());
    for (int i : ls) {
        cout << i << " ";
    }
}



int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Divisors of " << n << " are: ";
    // printDivisors(n);
    printDivisorsOptimized(n);
    cout << endl;
    return 0;
}   