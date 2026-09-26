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
    // Constructor of base class
    explicit Person(string personName) : name(move(personName)) {}

    // Function to display name
    void displayName() const
    {
        cout << "Name: " << name << '\n';
    }
};

// Derived class inheriting from Person
class Student : public Person
{
private:
    int rollNumber;

public:
    // Constructor of derived class
    Student(string studentName, int roll)
        : Person(move(studentName)), rollNumber(roll) {}

    // Function to display student details
    void displayStudent() const
    {
        displayName();
        cout << "Roll Number: " << rollNumber << '\n';
    }
};

int main()
{
    // Creating an object of Student class
    Student student("Amit", 101);

    // Displaying student details
    student.displayStudent();

    return 0;
}

Output : 
Name: Amit
Roll Number: 101
