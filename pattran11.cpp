#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter rows: ";
    cin >> n;

    for(int i = n; i >= 1; i--) {
        for(int s = 1; s <= n - i; s++) 
        cout << "  "; 
        for(int j = 1; j <= i; j++)
         cout << "* ";
        cout << endl;
    }

    return 0;
}