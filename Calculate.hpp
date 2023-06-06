// Calculate.hpp
#ifndef CALCULATE_HPP
#define CALCULATE_HPP

// Function to calculate the GPA for a semester
double calculateGPA(int numCourses, int courseCredits[], char courseGrades[]);
// Function to calculate the CGPA
double calculateCGPA(double cumulativeGradePoints, int cumulativeCredits, double semesterGPA, int semesterCredits);
// Function to save data to a file
void saveData(int numCourses, int courseCredits[], char courseGrades[], double semesterGPA);

#endif