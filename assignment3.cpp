#include <iostream>
using namespace std;

// Base Class
class Staff {
protected:
    string name, dept;
    int id;
public:
    void accept() {
        cout << "Enter  the Name: ";
        cin >> name;
        cout << "Enter  the Department: ";
        cin >> dept;
        cout << "Enter  the ID: ";
        cin >> id;
    }
};
// Derived Class: Teacher
class Teacher : public Staff {
    string subject;
    float experience;
public:
    void accept() {
        Staff::accept();
        cout << "Enter Subject: ";
        cin >> subject;
        cout << "Enter Experience (in years): ";
        cin >> experience;
    }
    void display() {
        cout << "Name\tDepartment\tID\tSubject\tExperience\n";
        cout << name << "\t" << dept << "\t\t" << id << "\t" << subject << "\t" << experience << "\n";
    }
};
// Derived Class: SupportStaff
class SupportStaff : public Staff {
    string areaOfSupport;
public:
    void accept() {
        Staff::accept();
        cout << "Enter Area of Support: ";
        cin >> areaOfSupport;
    }

    void display() {
        cout << "Name\tDepartment\tID\tArea of Support\n";
        cout << name << "\t" << dept << "\t\t" << id << "\t" << areaOfSupport << "\n";
    }
};
int main() {
    int t, s;
    cout << "Enter number of Teachers: ";
    cin >> t;
    Teacher teachers[t];
    cout << "Enter number of Support Staff: ";
    cin >> s;
    SupportStaff supports[s]; 

    cout << "\nEnter Teacher Details\n";
    for (int i = 0; i < t; i++) {
        cout << "\nTeacher " << i + 1 << ":\n";
        teachers[i].accept();
    }
    cout << "\nEnter Support Staff Details\n";
    for (int i = 0; i < s; i++) {
        cout << "\nSupport Staff " << i + 1 << ":\n";
        supports[i].accept();
    }
    cout << "\n\nDisplaying Teachers\n";
    for (int i = 0; i < t; i++) {
        teachers[i].display();
        cout << "\n";
    }
    cout << "\nDisplaying Support Staff\n";
    for (int i = 0; i < s; i++) {
        supports[i].display();
        cout << "\n";
    }
    return 0;
}
