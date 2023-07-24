#include <iostream>
using namespace std;

float calculate_average(float score1, float score2, float score3) {
    return (score1 + score2 + score3) / 3.0;
}

char calculate_grade(float total_score) {
    if (total_score >= 80 && total_score <= 100) {
        return 'A';
    }
    else if (total_score >= 75 && total_score < 80) {
        return 'B+';
    }
    else if (total_score >= 70 && total_score < 75) {
        return 'B';
    }
    else if (total_score >= 65 && total_score < 70) {
        return 'C+';
    }
    else if (total_score >= 60 && total_score < 65) {
        return 'C';
    }
    else if (total_score >= 55 && total_score < 60) {
        return 'D+';
    }
    else if (total_score >= 50 && total_score < 55) {
        return 'D';
    }
    else {
        return 'F';
    }
}

int main() {
    float quiz_score1, quiz_score2, quiz_score3, midterm_score, final_score;

    cout << "Enter first quiz score (out of 10): ";
    cin >> quiz_score1;
    cout << "Enter second quiz score (out of 10): ";
    cin >> quiz_score2;
    cout << "Enter third quiz score (out of 10): ";
    cin >> quiz_score3;

    cout << "Enter midterm score (out of 100): ";
    cin >> midterm_score;
    cout << "Enter final score (out of 100): ";
    cin >> final_score;

    float average_score = calculate_average(quiz_score1, quiz_score2, quiz_score3);
    float total_score = (average_score * 0.2) + (midterm_score * 0.4) + (final_score * 0.4);

    char grade = calculate_grade(total_score);

    cout << "Average quiz score: " << average_score << endl;
    cout << "Total score: " << total_score << endl;
    cout << "Final grade: " << grade << endl;

    return 0;
}
