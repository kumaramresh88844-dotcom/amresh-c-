#include <iostream>
using namespace std;

int main() {
    float cp_dozen, sp_dozen, cp_one, sp_one, total_cp, total_sp;

    cout << "Enter Cost Price per dozen: ";
    cin >> cp_dozen;
    cout << "Enter Selling Price per dozen: ";
    cin >> sp_dozen;

    cp_one = cp_dozen / 12.0;
    sp_one = sp_dozen / 12.0;

    total_cp = cp_one * 25;
    total_sp = sp_one * 25;

    if(total_sp > total_cp) {
        cout << "Profit = " << total_sp - total_cp << endl;
    } else if(total_cp > total_sp) {
        cout << "Loss = " << total_cp - total_sp << endl;
    } else {
        cout << "No Profit, No Loss" << endl;
    }

    return 0;
}