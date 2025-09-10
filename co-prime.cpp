#include <iostream>
using namespace std;


int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    if (gcd(num1, num2) == 1)
        cout << num1 << " and " << num2 << " are Co-prime numbers.";
    else
        cout << num1 << " and " << num2 << " are NOT Co-prime numbers.";

    return 0;
}