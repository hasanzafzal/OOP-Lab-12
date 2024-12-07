#include <iostream>
#include <string>
using namespace std;

class Person {
public:
    string name;
    string address;
    int fees;
    char grade;
    void getInput() {
        cout << "Enter name of student: ";
        getline(cin, name);
        cout << "Enter address of student: ";
        getline(cin, address);
        cout << "Enter fees of student: ";
        cin >> fees;
        cout << "Enter grade of student: ";
        cin >> grade;
    }
    void display() {
        cout << "Name is: " << name << endl;
        cout << "Add is: " << address << endl;
        cout << "Fees is: " << fees << endl;
        cout << "Grade is: " << grade << endl;
    }
};

class Lecturer : public Person {
public:
    int salary;
    int lectures_per_week;
    void getInput() {
        cout << "Enter name of lecturer: ";
        cin >> name;
        cout << "Enter address of lecturer: ";
        cin >> address;
        cout << "Enter salary: ";
        cin >> salary;
        cout << "Enter lectures in a week: ";
        cin >> lectures_per_week;
    }
    void display() {
        cout << "Name is: " << name << endl;
        cout << "Add is: " << address << endl;
        cout << "Salary is: " << salary << endl;
        cout << "Lectures in a week is: " << lectures_per_week << endl;
    }
};

int main() {
    Person student;
    Lecturer lecturer;
    student.getInput();
    cout << endl;
    lecturer.getInput();
    cout << endl;
    cout << endl;
    student.display();
    cout << endl;
    lecturer.display();
    return 0;
}