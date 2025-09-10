#include <iostream>
using namespace std;

int main() {
    int dayNumber;
    string days[7] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};

    cout << "Enter a number (1-7): ";
    cin >> dayNumber;

    if(dayNumber >= 1 && dayNumber <= 7) {
        cout << "The day is: " << days[dayNumber - 1] << endl;
    } else {
        cout << "Invalid number! Please enter 1-7." << endl;
    }

    return 0;
}