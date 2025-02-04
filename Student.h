
#ifndef STUDENT_H
#define STUDENT_H
#include <iostream>
#include <vector>
using namespace std;

class Course;

class Student {
    int id;
    string name;
    vector<int> enrolledCourses;
    const int MAX_ALLOWED_CREDITS = 18;
    public:
    int total_credits;
    Student(int id,string name);


    int getId() const;
    string getName() const;
    vector<int> getEnrolledCourses() const;

    bool takesCourse(Course); //Checks if the student is enrolled in the course.
    bool takeCourse(Course); //Adds a course if not enrolled and within credit limit.
    void dropCourse(Course); //Removes a course from enrollment.
    void printDetails();


};
#endif //STUDENT_H
