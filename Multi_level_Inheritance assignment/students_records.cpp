#include <iostream>
#include <string>
using namespace std;

// Level 1: Base class
class Person {
protected:
    string name;
public:
    Person(string n) : name(n) {}
    void showName() { cout << "Name: " << name << endl; }
};

// Level 2: Student inherits from Person
class Student : public Person {
protected:
    int studentId;
public:
    Student(string n, int id) : Person(n), studentId(id) {}
    void showId() { cout << "ID: " << studentId << endl; }
};

// Level 3: StudentRecord inherits from Student
class StudentRecord : public Student {
private:
    double marks;
public:
    StudentRecord(string n, int id, double m) : Student(n, id), marks(m) {}
    void showRecord() {
        showName();   // from Person
        showId();     // from Student
        cout << "Marks: " << marks << (marks >= 50 ? " (Pass)" : " (Fail)") << endl;
    }
};

int main() {
    StudentRecord s("Amina Nakato", 1002, 85);

    s.showName();    // inherited from Person
    s.showId();      // inherited from Student
    cout << "---" << endl;
    s.showRecord();  // defined in StudentRecord
    return 0;
}
