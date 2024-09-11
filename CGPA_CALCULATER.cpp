//                  TASK- 1
//              CGPA CALCULATOR


#include <iostream>
#include <iomanip>
using namespace std;

// Function to calculate GPA for the semester
double calculateGPA(int numCourses, int credits[], double gradePoints[]) 
{
    double totalCredits = 0, totalGradePoints = 0;

    for (int i = 0; i < numCourses; ++i) 
    {
        totalGradePoints += credits[i] * gradePoints[i];
        totalCredits += credits[i];
    }

    return totalGradePoints / totalCredits;
}

int main() 
{
    cout<<"WELCOME TO CGPA CALCULATOR PROGRAM"<<endl<<endl;
    
    int numCourses;

    // Input number of courses
    cout << "Enter the number of courses: ";
    cin >> numCourses;
    cout<<endl;
    int credits[numCourses];
    double gradePoints[numCourses];

    // Input course information
    for (int i = 0; i < numCourses; ++i) 
    {
        cout << "Enter credits for course " << i + 1 << ": ";
        cin >> credits[i];

        cout << "Enter grade points for course " << i + 1 << ": ";
        cin >> gradePoints[i];
        cout<<endl;
        cout<<endl;
    }

    // Calculate GPA for the semester
    double semesterGPA = calculateGPA(numCourses, credits, gradePoints);

    // Display individual grades for each course
    cout << "\nCourse-wise Grade Points:\n";
    for (int i = 0; i < numCourses; ++i) 
    {
        cout << "Course " << i + 1 << ": " << gradePoints[i] << " (Credits: " << credits[i] << ")\n";
    }

    // Calculate and display the CGPA (in this case, same as GPA for the semester)
    cout << fixed << setprecision(2);
    cout << "\nTotal GPA for the semester: " << semesterGPA << endl;
    cout << "Cumulative CGPA: " << semesterGPA << endl;

    return 0;
}
