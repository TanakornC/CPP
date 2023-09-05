#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int checkNum(int secret, int guess) {
    if (guess < secret) {
        cout << "The secret number is higher" << endl;
    } else if (guess > secret) {
        cout << "The secret number is lower" << endl;
    } else {
        cout << "Congratulations!" << endl;
    }
    return guess;
}

int main() {
    cout << "### Welcome to guessing number game ###" << endl;
    srand(time(0)); 
    int secret_number = rand() % 10 + 1; 
    cout << "Secret number has been chosen" << endl;

    int guess;
    int guess_count = 0;

    do {
        cout << "Guess the number (1 to 10): ";
        cin >> guess;
        guess_count++;

        guess = checkNum(secret_number, guess);

    } while (guess != secret_number);

    cout << "The secret number is " << secret_number << endl;
    cout << "You made " << guess_count << " guesses" << endl;

    return 0;
}
