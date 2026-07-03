#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student
{
private:
    int studentNumber;
    string firstName;
    string lastName;
    int age;
    string cellNumber;
    string course;
    double marks;
    double average;
    char letterGrade;

public:
    // Constructor
    Student();

    // Parameterized Constructor
    Student(int studentNumber, string firstName, string lastName,
            int age, string cellNumber, string course, double marks);

    // Getters
    int getStudentNumber() const;
    string getFirstName() const;
    string getLastName() const;
    int getAge() const;
    string getCellNumber() const;
    string getCourse() const;
    double getMarks() const;
    double getAverage() const;
    char getLetterGrade() const;

    // Setters
    void setStudentNumber(int studentNumber);
    void setFirstName(string firstName);
    void setLastName(string lastName);
    void setAge(int age);
    void setCellNumber(string cellNumber);
    void setCourse(string course);
    void setMarks(double marks);

    // Functions
    void calculateAverage();
    void assignLetterGrade();
    void displayStudent() const;
};

#endif
