#include <iostream>
#include <cmath>
using namespace std;


bool isPerfectSquare(long long n) {
    long long s = sqrt(n);
    return (s * s == n);
}


bool isFibonacci(int n) {
    return isPerfectSquare(5LL * n * n + 4) || isPerfectSquare(5LL * n * n - 4);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isFibonacci(num))
        cout << num << " is a Fibonacci number.";
    else
        cout << num << " is NOT a Fibonacci number.";

    return 0;
}