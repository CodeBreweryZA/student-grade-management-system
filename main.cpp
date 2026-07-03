#include <iostream>
#include "../include/StudentManager.h"

using namespace std;

int main()
{
    StudentManager manager;
    int choice;

    do
    {
        manager.showMenu();

        cout << "\nEnter your choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            manager.addStudent();
            break;

        case 2:
            manager.viewStudents();
            break;

        case 3:
            manager.searchStudent();
            break;

        case 4:
            manager.updateStudent();
            break;

        case 5:
            manager.deleteStudent();
            break;

        case 6:
            manager.saveToFile();
            break;

        case 7:
            manager.loadFromFile();
            break;

        case 0:
            cout << "\nThank you for using the Student Management System.\n";
            break;

        default:
            cout << "\nInvalid choice. Please try again.\n";
        }

    } while (choice != 0);

    return 0;
}
