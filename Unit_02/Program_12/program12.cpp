#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Common base class
class Person
{
protected:
    string name;

public:
    explicit Person(string personName)
        : name(move(personName)) {}

    void displayName() const
    {
        cout << "Name: " << name << '\n';
    }
};

// virtual inheritance prevents duplicate Person objects
class Student : virtual public Person
{
public:
    Student() : Person("Unknown") {}
};

// Employee also virtually inherits Person
class Employee : virtual public Person
{
public:
    Employee() : Person("Unknown") {}
};

// TeachingAssistant inherits from both Student and Employee
class TeachingAssistant : public Student, public Employee
{
public:
    // Virtual base class is initialized here
    explicit TeachingAssistant(string assistantName)
        : Person(move(assistantName)), Student(), Employee() {}
};

int main()
{
    TeachingAssistant assistant("Riya");

    assistant.displayName();

    return 0;
}

Output :

Name: Riya

Diagram :

        Person
       /      \
  Student   Employee
       \      /
   TeachingAssistant
