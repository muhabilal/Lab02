#include <iostream>
using namespace std;

int main() {
    // Step 1: Declare variables
    int score;       // Student's total score
    char grade;      // Grade to be assigned (A, B, C, D, F)

    // Step 2: Get the student's total score from the user
    cout << "Enter the student's total score (0 - 100): ";
    cin >> score;

    // Assign grade by checking conditions in sequence using only comparison operators
    (score >= 90 && score <= 100) && (grade = 'A');
    (score >= 80 && score < 90)  && (grade = 'B');
    (score >= 70 && score < 80)  && (grade = 'C');
    (score >= 60 && score < 70)  && (grade = 'D');
    cout << "Grade: " << grade << endl;
    return 0;
}
