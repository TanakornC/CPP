#include <iostream>
using namespace std;

void(viewall);
void(ViewID);
const int MAX_STUDENTS = 100;

int main() {
    int studentIDs[MAX_STUDENTS];
    int quizScores[MAX_STUDENTS];
    int midtermScores[MAX_STUDENTS];
    int finalScores[MAX_STUDENTS];
    int numStudents = 0;

    while (true) {
       cout << "================================\n";
       cout << "             MENU\n";
       cout << "================================\n";
       cout << "1.Input student records\n";
       cout << "2.View all student records\n";
       cout << "3.Show a student by ID\n";
       cout << "4.Exit\n";
       cout << "Select menu: ";

        int choice;
        cin >> choice;

        if (choice == 1) {
            if (numStudents < MAX_STUDENTS) {
                cout << "Input Student ID: ";
                cin >> studentIDs[numStudents];
                cout << "Input Quiz: ";
                cin >> quizScores[numStudents];
                cout << "Input Midterm: ";
                cin >> midtermScores[numStudents];
                cout << "Input Final: ";
                cin >> finalScores[numStudents];
                numStudents++;
            } else {
                cout << "Maximum number of students reached.\n";
            }
        } else if (choice == 2) {
            cout << "--------------------------------\n";
            cout << "StdID   Quiz    Midterm  Final\n";
            cout << "--------------------------------\n";
            for (int i = 0; i < numStudents; ++i) {
                cout << studentIDs[i] << "\t" << quizScores[i] << "\t" << midtermScores[i] << "\t" << finalScores[i] << "\n";
            }
            cout << "--------------------------------\n";
        } else if (choice == 3) {
            int searchID;
            cout << "Input ID: ";
            cin >> searchID;
            bool found = false;
            for (int i = 0; i < numStudents; ++i) {
                if (studentIDs[i] == searchID) {
                    cout << "--------------------------------\n";
                    cout << "StdID   Quiz    Midterm  Final\n";
                    cout << "--------------------------------\n";
                    cout << studentIDs[i] << "\t" << quizScores[i] << "\t" << midtermScores[i] << "\t" << finalScores[i] << "\n";
                    cout << "--------------------------------\n";
                    found = true;
                    break;
                }
            }
            if (!found) {
                cout << "Student ID not found.\n";
            }
        } else if (choice == 4) {
            break;
        } else {
            cout << "Invalid choice. Please select a valid option.\n";
        }
    }

    return 0;
}