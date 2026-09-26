#include <iostream>
#include <string>
#include <utility>

using namespace std;

// First level - base class
class Person
{
protected:
    string name;

public:
    explicit Person(string personName) : name(move(personName)) {}

    void showPerson() const
    {
        cout << "Name: " << name << '\n';
    }
};

// Employee inherits from Person
class Employee : public Person
{
protected:
    int employeeId;

public:
    Employee(string employeeName, int id)
        : Person(move(employeeName)), employeeId(id) {}

    void showEmployee() const
    {
        cout << "Employee ID: " << employeeId << '\n';
    }
};

// Manager inherits from Employee
class Manager : public Employee
{
private:
    int teamSize;

public:
    Manager(string managerName, int id, int size)
        : Employee(move(managerName), id), teamSize(size) {}

    // Displays details inherited from both levels
    void showManager() const
    {
        showPerson();
        showEmployee();
        cout << "Team Size: " << teamSize << '\n';
    }
};

int main()
{
    Manager manager("Ravi", 501, 8);

    manager.showManager();

    return 0;
}
