#include <iostream>
using namespace std;

int main() {
    int withdrawAmount;
    cout << "Amount to be withdraw : ";
    cin >> withdrawAmount;

    int thousandNotes = 0;
    int hundredNotes = 0;
    int fiftyNotes = 0;
    int twentyNotes  = 0;

    if (withdrawAmount >= 1000) {
        thousandNotes = withdrawAmount / 1000;
        withdrawAmount %= 1000;
    }
    if (withdrawAmount >= 100) {
        hundredNotes = withdrawAmount / 100;
        withdrawAmount %= 100;
    }
    if (withdrawAmount >= 50) {
        fiftyNotes = withdrawAmount / 50;
        withdrawAmount %= 50;
    }
    if (withdrawAmount >= 20) {
        twentyNotes = withdrawAmount / 20;
        withdrawAmount %= 20;
    }

    
    cout << " 1000 : " << thousandNotes <<  endl;
    cout << " 100 : " << hundredNotes  << endl;
    cout << " 50 : " << fiftyNotes <<  endl;
    cout << " 20 : " << twentyNotes <<  endl;

    return 0;
}