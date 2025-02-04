
#ifndef LMS_H
#define LMS_H
#include<iostream>
#include<vector>

#include "Course.h"
#include "Student.h"
using namespace std;

class LMS {
    string name;
    vector<Student> students;
    vector<Course> courses;
    public:
    LMS(string name);
    void addStudent(Student);
    void addCourse(Course);
    void addStudentToCourse(int student_id,int course_id);
    void printDetails();

};
#endif //LMS_H
