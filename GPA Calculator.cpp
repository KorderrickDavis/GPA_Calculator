#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

// Function to calculate letter grade based on average
char calculateLetterGrade(double average) {
    if (average >= 90) {
        return 'A';
    } else if (average >= 80) {
        return 'B';
    } else if (average >= 70) {
        return 'C';
    } else if (average >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int numStudents;

    // Ask user for number of students
    cout << "Enter the number of students: ";
    cin >> numStudents;

    // Loop over the number of students
    for (int i = 0; i < numStudents; i++) {
        string firstName, lastName;
        double grade1, grade2, grade3;

        // Input student details from user
        cout << "Enter the first and last name of student #" << (i + 1) << ": ";
        cin >> firstName >> lastName;

        // Input grades
        cout << "Enter three grades for " << firstName << " " << lastName << ": ";
        cin >> grade1 >> grade2 >> grade3;

        // Calculate the average
        double average = (grade1 + grade2 + grade3) / 3.0;

        // Calculate the letter grade
        char letterGrade = calculateLetterGrade(average);

        // Display the results
        cout << fixed << setprecision(1);
        cout << "Student: " << firstName << " " << lastName << endl;
        cout << "Grades: " << grade1 << ", " << grade2 << ", " << grade3 << endl;
        cout << "Average: " << average << endl;
        cout << "Letter Grade: " << letterGrade << endl;
        cout << "---------------------------------" << endl;
    }

    return 0;
}