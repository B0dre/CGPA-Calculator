#   CGPA Calculator Program in C++

# Overview
This program calculates the CGPA (Cumulative Grade Point Average) for a student based on the grades obtained and credits associated with each course. It provides a step-by-step guide on how to compile or use the program.

# Prerequisites
-   Basic knowledge of C++ programming language.
-   C++ compiler installed on your system.
-   If you do not have any programming knowledge, please download and use one of the following compiler versions:
    - WINDOWS: 
        x86 (32 bits): 
            
            https://github.com/wlbdo/CGPA-Calculator/blob/main/CPGA_Calculator-v1.0-x86.exe
            
         x64 (64 bits):
            
            https://github.com/wlbdo/CGPA-Calculator/blob/main/CPGA_Calculator-v1.0-x64.exe
           
         Without libraries: 
            
            https://github.com/wlbdo/CGPA-Calculator/blob/main/CPGA_Calculator-v1.0-beta.exe
   
    - LINUX: (Pending)
    - MACOS: (Pending)

# Instructions

# Step 1: Run the compiled file or compile your own
-  I. To RUN: doble-click the .exe file or type the following command into the terminal "./CPGA_Calculator-v1.0-x64.exe"
- II. To COMPILE: after downloading or cloning the repository, open a terminal from the CPGA_CALCULATOR folder and 
        type the following command:
        
        g++ main.cpp Calculate.cpp -o CPGA_Calculator-v1.0-x64.exe -m64 -static-libgcc -static-libstdc++

# Step 2: Prompt the user to enter the number of courses taken
-   Enter the number of courses taken

# Step 3: Take Grade and Credit for each course
-   Enter the grade obtained in the course
-   Enter the credits associated with the course

# Step 4: Display the GPA for the semester
- I. The program calculate the total credits earned and total grade points earned
- II. The program calculate the GPA for the semester

# Step 5: Save the data to a .TXT file (optional)
- Type: Y or y "to save the data to a .TXT file." Type: N or n "to cancel".

# Calculate the CGPA
To calculate the CGPA, consider the cumulative GPA for all semesters. Maintain a cumulative total of credits and grade points across semesters, and update them as new semester GPAs are calculated. The CGPA is calculated by dividing the cumulative grade points by the cumulative credits.

# Additional Features (Optional)
Optionally, you can add the following features to enhance the program:

-   Searching algorithm: Implement a searching algorithm to search for a specific course.
-   Sorting algorithm: Implement a sorting algorithm to sort the course grades.
-   Display individual grades: Allow the user to display the individual grades obtained in each course.

# Usage
1.  Compile the program using a C++ compiler.
2.  Run the compiled program.
3.  Follow the on-screen instructions to input the grades and credits for each course.
4.  The program will calculate the GPA for the semester and display it.

# Contributions
Contributions to this program are welcome. If you have any suggestions or improvements, feel free to create an issue or submit a pull request.

# License
This program is licensed under the MIT License.
