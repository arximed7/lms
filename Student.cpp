#include<iostream>
#include"Student.h"
#include"Course.h"
using namespace std;

Student::Student(int id,string name) {
  this->id = id;
  this->name = name;
  this->total_credits = 0;
}
int Student::getId() const {
    return id;
}
string Student::getName() const {
    return name;
}
vector<int> Student::getEnrolledCourses() const {
    return enrolledCourses;
}
bool Student::takeCourse(Course course) {
    if(takesCourse(course)) {
        return false;
    }
    else {
        if(course.getCredits()+this->total_credits<=MAX_ALLOWED_CREDITS) {
          total_credits += course.getCredits();
            enrolledCourses.push_back(course.getId());
            return true;
        }
        return false;
    }
}
bool Student::takesCourse(Course course) {
for (int i = 0; i < enrolledCourses.size(); i++) {
  if (enrolledCourses[i] == course.getId()) {
    return true;
  }
}
return false;
}
void Student::dropCourse(Course course) {
    enrolledCourses.erase(remove(enrolledCourses.begin(),enrolledCourses.end(),course.getId()),enrolledCourses.end());
}
void Student::printDetails() {
cout<<"Student ID: "<<getId()<<", "<<"Name: "<<getName()<<endl;
cout<<"Enrolled Courses: ";
for (int i = 0; i < enrolledCourses.size(); i++) {
  cout<<enrolledCourses[i]<<" ";
}
cout<<endl;

}
