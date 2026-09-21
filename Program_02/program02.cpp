#include <iostream>
#include <string>
#include <utility>

using namespace std;

// Base class
class Employee
{
protected:
    string name;

public:
    // Store employee name
    explicit Employee(string employeeName) : name(move(employeeName)) {}
};

// Developer is derived from Employee
class Developer : public Employee
{
private:
    string language;

public:
    // Constructor of Developer
    Developer(string employeeName, string programmingLanguage)
        : Employee(move(employeeName)), language(move(programmingLanguage)) {}

    // Displays developer information
    void display() const
    {
        cout << "Developer: " << name << '\n';
        cout << "Language: " << language << '\n';
    }
};

int main()
{
    Developer developer("Neha", "C++");

    developer.display();

    return 0;
}
