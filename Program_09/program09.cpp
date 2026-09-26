#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Base class
class Person
{
protected:
    string name;

public:
    explicit Person(string personName)
        : name(move(personName)) {}
};

// Student inherits from Person
class Student : public Person
{
private:
    int rollNumber;

public:
    // Passing student name to the base class constructor
    Student(string studentName, int roll)
        : Person(move(studentName)), rollNumber(roll) {}

    void display() const
    {
        cout << "Name: " << name << '\n';
        cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main()
{
    Student student("Kiran", 24);

    student.display();

    return 0;
}
Output :
Name: Kiran
Roll Number: 24
