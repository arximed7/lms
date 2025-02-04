#include <iostream>
#include "Course.h"
#include"Student.h"
#include"LMS.h"

using namespace std;
int main()
{
    string nameLMS;
    getline(cin,nameLMS);
    LMS mylms(nameLMS);
    int numberOfStudents;
    cin>>numberOfStudents;
    for(int i=0;i<numberOfStudents;i++) {
        int id;
        string name;
        cin>>id>>name;
        Student s1(id,name);
        mylms.addStudent(s1);

    }
    int numberOfCourses;
    cin>>numberOfCourses;
    for(int i=0;i<numberOfCourses;i++) {
        int id;
        string name;
        int credit;
        cin>>id>>name>>credit;
        Course c1(id,name,credit);
        mylms.addCourse(c1);
    }
    int n;
    cin>>n;
    for(int i=0;i<n;i++) {
        int student_id;
        int course_id;
        cin>>student_id>>course_id;
        mylms.addStudentToCourse(student_id,course_id);

    }
    mylms.printDetails();
    return 0;
}
