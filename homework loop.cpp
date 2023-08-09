#include <iostream>
using namespace std;

int main() {
    int option, numLines;

    do {
        cout << "Select Menu" << endl;
        cout << "*********************" << endl;
        cout << "Input number of lines: ";
        cin >> numLines;

        cout << "1. Align Left" << endl;
        cout << "2. Align Right" << endl;
        cout << "3. Center" << endl;
        cout << "4. Exit" << endl;
        cout << "*********************" << endl;

        cin >> option;

        if (option == 4) {
            break;
        }

        switch (option) {
        case 1:
            for (int i = 1; i <= numLines; ++i) {
                for (int j = 1; j <= i; ++j) {
                    cout << "*";
                }
                cout << endl;
            }
            break;

        case 2:
            for (int i = 1; i <= numLines; ++i) {
                for (int j = 1; j <= numLines - i; ++j) {
                    cout << " ";
                }
                for (int j = 1; j <= i; ++j) {
                    cout << "*";
                }
                cout << endl;
            }
            break;

        case 3:
            for (int i = 1; i <= numLines; ++i) {
                int spaces = numLines - i;
                for (int j = 1; j <= spaces; ++j) {
                    cout << " ";
                }
                spaces--;

                for (int j = 1; j <= 2 * i - 1; ++j) {
                    cout << "*";
                }
                cout << endl;
            }
            break;

        default:
            cout << "Invalid option" << endl;
            break;
        }

    } while (option != 4);

    system("pause");

    return 0;
}
