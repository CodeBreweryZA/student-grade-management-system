#ifndef STUDENTMANAGER_H
#define STUDENTMANAGER_H

#include <vector>
#include "Student.h"

using namespace std;

class StudentManager
{
private:
    vector<Student> students;

public:
    // Constructor
    StudentManager();

    // Core Functions
    void addStudent();
    void viewStudents();
    void searchStudent();
    void updateStudent();
    void deleteStudent();

    // File Handling
    void saveToFile();
    void loadFromFile();

    // Menu
    void showMenu();
};

#endif
