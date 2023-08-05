#include <iostream>
using namespace std;

int main() {
    char charInput;
    int total = 0;

    for (int i = 0; i < 3; i++) {
        cout << "Enter Character (A,B,C): ";
        cin >> charInput;

        if (charInput == 'A' || charInput == 'a') {
            total += 10;
        } else if (charInput == 'B' || charInput == 'b') {
            total += 20;
        } else if (charInput == 'C' || charInput == 'c') {
            total += 30;
        } else {
            cout << "Invalid input. Please enter A, B, or C." << endl;
            i--; // Re-prompt for input
        }
    }

    cout << "A + B + C = 10 + 20 + 30 = " << total << endl;

	system ("pause");
    return 0;
}
