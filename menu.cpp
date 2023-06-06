//menu.cpp
#include <iostream>
#include <fstream>
#include "Calculate.hpp"

using namespace std;

const int MAX_COURSES = 100;

void runMenu() {
    int numCourses;
    int courseCredits[MAX_COURSES];
    char courseGrades[MAX_COURSES];

    // Program banner and credits
    cout << "\n";
    cout << "\t*******************************" << "\n";
    cout << "\t      CGPA Calculator v1.0     " << "\n";
    cout << "\t*******************************" << "\n";
    cout << "\t    Developed by Wilson Lora   " << "\n";
    cout << "\t Follow me on Twitter: @wlb_do " << "\n";
    cout << "\n";

    // Prompt for the number of courses
    cout << "Enter the number of courses: ";
    cin >> numCourses;

    if (numCourses <= 0 || numCourses > MAX_COURSES) {
        cout << "ERROR: Invalid number of courses entered. Exiting the program..." << endl;
    }

    cout << "Enter the grades and credits for each course:" << endl;
    for (int i = 0; i < numCourses; i++) {
        cout << "Course " << (i + 1) << " Grade (A, B, C, D, F): ";
        cin >> courseGrades[i];
        // Convert the entered grade to uppercase
        if (courseGrades[i] >= 'a' && courseGrades[i] <= 'f') {
            courseGrades[i] = courseGrades[i] - 32;
        }
        cout << "Course " << (i + 1) << " Credits: ";
        cin >> courseCredits[i];
    }

    // Call the necessary functions from Calculate.hpp
    double semesterGPA = calculateGPA(numCourses, courseCredits, courseGrades);
    cout << "Semester GPA: " << semesterGPA << endl;

    // Calculate cumulative GPA and credits across semesters (if available)
    double cumulativeGradePoints = 0.0;
    int cumulativeCredits = 0;

    // Calculate CGPA if data for previous semesters is available
    double cgpa = calculateCGPA(cumulativeGradePoints, cumulativeCredits, semesterGPA, numCourses);

    // Save data to a file
    char flag = 'N';
    cout<<"\nDo you want to save the data? (Y/N): ";
    cin >> flag;
    if(flag == 'Y' || flag == 'y'){
        saveData(numCourses, courseCredits, courseGrades, semesterGPA);
    }else{
        cout<<"\nThanks for using this tools..." << "\n";
    }
}