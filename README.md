#   CGPA Calculator Program in C++

# Overview
This program calculates the CGPA (Cumulative Grade Point Average) for a student based on the grades obtained and credits associated with each course. It provides a step-by-step guide on how to create and use the program.

# Prerequisites
-   Basic knowledge of C++ programming language.
-   C++ compiler installed on your system.
-   If you do not have any programming knowledge please use one of this compiler versions:
    - WINDOWS:
       - x86 (32 bits):
       - x64 (64 bits):
    - LINUX:
    - MACOS:

# Instructions

# Step 1: Define the necessary variables and constants
-   numCourses: Number of courses taken by the student.
-   courseGrades: Array to store the grades obtained in each course.
-   courseCredits: Array to store the credits associated with each course.
-   totalCredits: Total credits earned.
-   totalGradePoints: Total grade points earned.
-   i: Loop variable.

# Step 2: Prompt the user to enter the number of courses taken
std::cout << "Enter the number of courses taken: ";
std::cin >> numCourses;

# Step 3: Take input for each course using a loop
for (i = 0; i < numCourses; i++) {
    std::cout << "Enter the grade obtained in course " << i + 1 << ": ";
    std::cin >> courseGrades[i];

    std::cout << "Enter the credits associated with course " << i + 1 << ": ";
    std::cin >> courseCredits[i];
}

# Step 4: Calculate the total credits earned and total grade points earned
for (i = 0; i < numCourses; i++) {
    // Calculate grade points for each course
    // ...

    // Update totalCredits and totalGradePoints
    // ...
}

# Step 5: Calculate the GPA for the semester
float GPA = totalGradePoints / totalCredits;
std::cout << "GPA for the semester: " << GPA << std::endl;

# Step 6: Display the GPA for the semester

# Step 7: Save the data to a file (optional)

# Step 8: Calculate the CGPA
To calculate the CGPA, consider the cumulative GPA for all semesters. Maintain a cumulative total of credits and grade points across semesters, and update them as new semester GPAs are calculated. The CGPA is calculated by dividing the cumulative grade points by the cumulative credits.

# Additional Features (Optional)
Optionally, you can add the following features to enhance the program:
-   Searching algorithm: Implement a searching algorithm to search for a specific course.
-   Sorting algorithm: Implement a sorting algorithm to sort the course grades.
-   Display individual grades: Allow the user to display the individual grades obtained in each course.

# Usage
1.- Compile the program using a C++ compiler.
2.- Run the compiled program.
3.- Follow the on-screen instructions to input the grades and credits for each course.
4.- The program will calculate the GPA for the semester and display it.

# Contributions
Contributions to this program are welcome. If you have any suggestions or improvements, feel free to create an issue or submit a pull request.

# License
This program is licensed under the MIT License.