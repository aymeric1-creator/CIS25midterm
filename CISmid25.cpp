#include <iostream>
#include <string>
using namespace std;

int main() {
    StudentManager manager;
    manager.loadFromFile("grades.txt");

    int choice;
    do {
        std::cout << "\nStudent Grade Tracker Menu:\n";
        std::cout << "1. Add Student\n";
        std::cout << "2. Display All Students\n";
        std::cout << "3. Search by Student Name\n";
        std::cout << "4. Save to File\n";
        std::cout << "5. Exit\n";
        std::cout << "Enter your choice: ";
        std::cin >> choice;
        std::cin.ignore();

        switch (choice) {
        case 1:
            manager.addStudent();
            break;
        case 2:
            manager.displayAll();
            break;
        case 3:
            manager.searchStudent();
            break;
        case 4:
            manager.saveToFile("grades.txt");
            break;
        case 5:
            std::cout << "Exiting...\n";
            break;
        default:
            std::cout << "Invalid choice.\n";
        }
    } while (choice != 5);

    return 0;
}
