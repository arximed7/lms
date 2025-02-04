#include "Course.h"
#include<iostream>
using namespace std;

Course::Course(int id,string name,int credits) {
    this->id = id;
    this->name = name;
    this->credits = credits;
}
int Course::getId() const{
    return id;
}
string Course::getName() const {
    return name;
}
int Course::getCredits() const {
    return credits;
}
bool Course::hasStudent(Student student) {
    for (int i = 0; i < students.size(); i++) {
        if (students[i] == student.getId()) {
            return true;
        }
    }
    return false;
}

bool Course::addStudent(Student student) {
if(!hasStudent(student)){
  students.push_back(student.getId());
  return true;
}
return false;
}
void Course::dropStudent(Student student) {
    students.erase(remove(students.begin(),students.end(),student.getId()),students.end());
}
void Course::printDetails() {
    cout<<"Course ID: "<<getId()<<", "<<"Name: "<<getName()<<", "<<"Credits: "<<getCredits()<<endl;
    cout<<"Enrolled Students: ";
    for (int i = 0; i < students.size(); i++) {
        cout<<students[i]<<" ";
    }
    cout<<endl;

}

