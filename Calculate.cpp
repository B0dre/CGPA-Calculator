//Calculate.cpp
#include <iostream>
#include <fstream>
#include "Calculate.hpp"

using namespace std;

// Function to calculate the GPA for a semester
double calculateGPA(int numCourses, int courseCredits[], char courseGrades[]) {
    int totalCredits = 0;
    double totalGradePoints = 0.0;

    for (int i = 0; i < numCourses; i++) {
        switch (courseGrades[i]) {
            case 'A':
                totalGradePoints += 4.0 * courseCredits[i];
                break;
            case 'B':
                totalGradePoints += 3.0 * courseCredits[i];
                break;
            case 'C':
                totalGradePoints += 2.0 * courseCredits[i];
                break;
            case 'D':
                totalGradePoints += 1.0 * courseCredits[i];
                break;
            case 'F':
                totalGradePoints += 0.0;
                break;
            default:
                cout << "Invalid grade entered for course " << (i + 1) << endl;
        }

        totalCredits += courseCredits[i];
    }

    return totalGradePoints / totalCredits;
}

// Function to calculate the CGPA
double calculateCGPA(double cumulativeGradePoints, int cumulativeCredits, double semesterGPA, int semesterCredits) {
    return (cumulativeGradePoints + (semesterGPA * semesterCredits)) / (cumulativeCredits + semesterCredits);
}

// Function to save data to a file
void saveData(int numCourses, int courseCredits[], char courseGrades[], double semesterGPA) {
    ofstream outputFile("CPGA_Calculator_data.txt", ios::app);

    if (outputFile.is_open()) {
        outputFile << "+ Semester GPA: " << semesterGPA << endl;
        outputFile << "  - Course-wise Grades:" << endl;
        for (int i = 0; i < numCourses; i++) {
            outputFile << "\t# Course " << (i + 1) << ": Grade " << courseGrades[i] << ", Credits " << courseCredits[i] << endl;
        }
        outputFile << "------------------------------------" << endl;
        outputFile.close();
        cout << "\nData saved successfully." << endl;
    } else {
        cout << "Error: Unable to save data." << endl;
    }
}