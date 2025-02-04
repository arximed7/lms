

#ifndef COURSE_H
#define COURSE_H
#include<iostream>
#include<vector>
#include"Student.h"
using namespace std;
class Student;
class Course {
    int id;
    string name;
    int credits;
    vector<int> students;
    public:
    Course(int id,string name,int credits);

    int getId() const;

    string getName() const;

    int getCredits() const;

    bool hasStudent(Student); //Check if a student is already enrolled. Return true if found.
    bool addStudent(Student);//Add a student to the students list. Return true if the student was successfully added.
    void dropStudent(Student); //Remove a student from the students list.
    void printDetails();

};
#endif //COURSE_H
