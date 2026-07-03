#include "../include/Student.h"

// Default Constructor
Student::Student()
{
    studentNumber = 0;
    firstName = "";
    lastName = "";
    age = 0;
    cellNumber = "";
    course = "";
    marks = 0.0;
    average = 0.0;
    letterGrade = 'F';
}

// Parameterized Constructor
Student::Student(int studentNumber, string firstName, string lastName,
                 int age, string cellNumber, string course, double marks)
{
    this->studentNumber = studentNumber;
    this->firstName = firstName;
    this->lastName = lastName;
    this->age = age;
    this->cellNumber = cellNumber;
    this->course = course;
    this->marks = marks;

    calculateAverage();
    assignLetterGrade();
}

// Getters
int Student::getStudentNumber() const
{
    return studentNumber;
}

string Student::getFirstName() const
{
    return firstName;
}

string Student::getLastName() const
{
    return lastName;
}

int Student::getAge() const
{
    return age;
}

string Student::getCellNumber() const
{
    return cellNumber;
}

string Student::getCourse() const
{
    return course;
}

double Student::getMarks() const
{
    return marks;
}

double Student::getAverage() const
{
    return average;
}

char Student::getLetterGrade() const
{
    return letterGrade;
}

// Setters
void Student::setStudentNumber(int studentNumber)
{
    this->studentNumber = studentNumber;
}

void Student::setFirstName(string firstName)
{
    this->firstName = firstName;
}

void Student::setLastName(string lastName)
{
    this->lastName = lastName;
}

void Student::setAge(int age)
{
    this->age = age;
}

void Student::setCellNumber(string cellNumber)
{
    this->cellNumber = cellNumber;
}

void Student::setCourse(string course)
{
    this->course = course;
}

void Student::setMarks(double marks)
{
    this->marks = marks;
    calculateAverage();
    assignLetterGrade();
}

// Calculate Average
void Student::calculateAverage()
{
    average = marks;
}

// Assign Letter Grade
void Student::assignLetterGrade()
{
    if (average >= 75)
        letterGrade = 'A';
    else if (average >= 65)
        letterGrade = 'B';
    else if (average >= 55)
        letterGrade = 'C';
    else if (average >= 50)
        letterGrade = 'D';
    else
        letterGrade = 'F';
}

// Display Student Information
void Student::displayStudent() const
{
    cout << "----------------------------------------" << endl;
    cout << "Student Number : " << studentNumber << endl;
    cout << "Name           : " << firstName << " " << lastName << endl;
    cout << "Age            : " << age << endl;
    cout << "Cell Number    : " << cellNumber << endl;
    cout << "Course         : " << course << endl;
    cout << "Marks          : " << marks << endl;
    cout << "Average        : " << average << endl;
    cout << "Letter Grade   : " << letterGrade << endl;
}
